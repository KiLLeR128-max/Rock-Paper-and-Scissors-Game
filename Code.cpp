#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main(){
    string player;
    string opponent;
    int playerScore;
    int opponentScore;
    string rps[]={"Rock","Paper","Scissor"};

    srand((unsigned int)time(NULL));

    while(true){
        cout << "Enter Rock,Paper or Scissors : ";
        getline(cin,player);
        if (player !="Rock" && player!="Paper" && player!="Scissor"){
            break;
        }
        opponent=rps[rand() % 3];
        cout<<"Opponent chooses"<<opponent<<endl;

        if (player == opponent){
            playerScore++;
            opponentScore++;
            }
            else if(player=="Rock"){
                if(opponent=="Scissor") playerScore++;
                else if(opponent=="Paper") opponentScore++;
            
            }
            else if(player =="Paper"){
                if(opponent=="Rock")playerScore++;
                else if(opponent =="Scissors")opponentScore++;
            }
            else if(player=="Scissor"){
                if(opponent=="Paper")playerScore++;
                else if(opponent=="Rock")opponentScore++;
                }
                cout<<"Player Score :" <<playerScore << "opponent: "<< opponentScore<<endl;
    
    }
    cout<<"Player Score :" <<playerScore << "opponent: "<< opponentScore<<endl;
    if (playerScore>opponentScore)cout<<"Player WON"<<endl;
    else if (opponentScore>playerScore)cout<<"Opponent WON"<<endl;
    else cout<<"It's a TIE"<<endl;

}