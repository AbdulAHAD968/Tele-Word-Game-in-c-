# Tele-Word-Game-in-c++
Search the words combination in an NxN grid

Title: Word Search Game

Overview:
This C++ program implements a word search game. The game consists of a grid of letters, and the player needs to find a list of words hidden within the grid. The words can be oriented horizontally, vertically, or diagonally in both forward and backward directions.

Files:

word_search.cpp: Contains the main program for the word search game.
tictactoe.cpp: Contains the main program for the Tic Tac Toe game.
Word Search Game (word_search.cpp):

Includes:

<iostream>: Input and output stream handling.
<fstream>: File stream handling.
<iomanip>: Manipulators to format output.
<cstring>: C-style string manipulation.
<chrono>: Time measurement utilities.

Functions:

printBlankArray Function:

Prints the contents of the blank_array to display the current state after a word is found.
printTeleWord Function:


Prints the TELE_WORD, which is the remaining letters after finding words.
checkHorizontal Function:


Checks for the presence of a word horizontally in both forward and backward directions.
checkVertical Function:


Checks for the presence of a word vertically in both upward and downward directions.
search_word Function:


Searches for a word in the grid horizontally and vertically.
right_diagonal_up Function:


Searches for a word diagonally from left to right and upwards.
right_diagonal_down Function:


Searches for a word diagonally from left to right and downwards.
left_diagonal_up Function:


Searches for a word diagonally from right to left and upwards.
left_diagonal_down Function:


Searches for a word diagonally from right to left and downwards.
Main_search Function:


Main function orchestrating the word search game.
Reads input file, initializes necessary data structures, and performs the search.
Displays information about the found words, time taken, and additional statistics.
main Function:
Main entry point of the program.
Accepts command-line arguments for the input file.
Reads and processes the input file to play the word search game.
Tic Tac Toe Game (tictactoe.cpp):

Includes:

<iostream>: Input and output stream handling.
<iomanip>: Manipulators to format output.
Functions:

printBoard Function:

Prints the current state of the Tic Tac Toe board.
checkWin Function:


Checks if a player has won by examining rows, columns, and diagonals.
isBoardFull Function:


Checks if the Tic Tac Toe board is full, resulting in a tie.
main Function:


Main entry point of the program.
Implements the Tic Tac Toe game with two players taking turns.
Asks for player names, prints the board, processes player moves, and determines the game outcome.


Additional Notes:

Both programs use dynamic memory allocation for character arrays, managed by new and delete operators.
The word search game provides detailed information about the found words, their positions, and the time taken to search.
The Tic Tac Toe game allows players to enter their names and continues to prompt for a new game until the user chooses to exit.


Usage:

Compile the programs using a C++ compiler (e.g., g++ -o word_search word_search.cpp).
Run the compiled executable, providing the input file for the word search game (e.g., ./word_search input.txt).
Follow the on-screen instructions to play the word search game or the Tic Tac Toe game.


Note: This documentation is a summary for a better understanding of the code. It's important to ensure that the code works as intended by testing it in the desired environment.
