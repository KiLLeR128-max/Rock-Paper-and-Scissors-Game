# Rock, Paper, Scissors Game
## Description
This is a simple console-based Rock, Paper, Scissors game implemented in C++. The game allows the player to compete against a computer opponent. The player can choose between Rock, Paper, or Scissors, and the computer's choice is made randomly. The game continues until the player decides to exit. The scores for both the player and the opponent are tracked and displayed at the end.

## Features
- Play Rock, Paper, Scissors against a computer opponent.
- Track and display scores for both player and opponent.
- Input validation to ensure only valid choices are accepted.
- Option to exit the game at any time by typing 'exit'.

## Requirements
- C++ Compiler (e.g., g++, clang++)
- Standard C++ Library

## Compilation
To compile the code, use a C++ compiler. For example, with `g++`, you can run:

```console
g++ -o rps_game Code.cpp
```

This will produce an executable file named `rps_game`.

## Usage
Run the compiled program:
```console
./rps_game
```

Follow the prompts to enter your choice:

1. Enter one of "Rock", "Paper", or "Scissors".
2. The computer will randomly select its choice.
3. The result of each round will be displayed, and the scores will be updated.
4. Type 'exit' to quit the game at any time.

## Example

```console
User@Github:~$ ./rps_game 
Enter Rock, Paper or Scissors (or type 'exit' to quit): Rock
Opponent chooses Paper
Opponent wins this round!
Player Score: 0 | Opponent Score: 1
Enter Rock, Paper or Scissors (or type 'exit' to quit): Paper
Opponent chooses Rock
Player wins this round!
Player Score: 1 | Opponent Score: 1
Enter Rock, Paper or Scissors (or type 'exit' to quit): exit
Final Scores - Player: 1 | Opponent: 1
It's a TIE!
```