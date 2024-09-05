#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string player;
    string opponent;
    int playerScore = 0; 
    int opponentScore = 0;
    string rps[] = {"Rock", "Paper", "Scissors"}; // Fixed "Scissor" to "Scissors"

    srand(static_cast<unsigned int>(time(nullptr))); // Corrected srand usage

    while (true) {
        cout << "Enter Rock, Paper or Scissors (or type 'exit' to quit): ";
        getline(cin, player);
        
        // Allow the user to exit the game
        if (player == "exit") {
            break;
        }

        bool validInput = false;
        for (const string& choice : rps) {
            if (player == choice) {
                validInput = true;
                break;
            }
        }

        if (!validInput) {
            cout << "Invalid input. Please enter Rock, Paper, or Scissors." << endl;
            continue;
        }

        // Randomly select the opponent's choice
        opponent = rps[rand() % 3];
        cout << "Opponent chooses " << opponent << endl;

        // Determine the winner
        if (player == opponent) {
            cout << "It's a tie!" << endl;
        } else if ((player == "Rock" && opponent == "Scissors") ||
                   (player == "Paper" && opponent == "Rock") ||
                   (player == "Scissors" && opponent == "Paper")) {
            playerScore++;
            cout << "Player wins this round!" << endl;
        } else {
            opponentScore++;
            cout << "Opponent wins this round!" << endl;
        }

        cout << "Player Score: " << playerScore << " | Opponent Score: " << opponentScore << endl;
    }

    // Display final results
    cout << "Final Scores - Player: " << playerScore << " | Opponent: " << opponentScore << endl;
    if (playerScore > opponentScore) {
        cout << "Player WON!" << endl;
    } else if (opponentScore > playerScore) {
        cout << "Opponent WON!" << endl;
    } else {
        cout << "It's a TIE!" << endl;
    }

    return 0;
}
