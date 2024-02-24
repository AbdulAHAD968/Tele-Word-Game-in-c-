#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<chrono>
#include<ctime>
#include<cstdlib>


//////////////////** { ANSI COLOR SEQUENCES } ** //////////////////////////


#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"
#define ANSI_COLOR_BRIGHT_BLACK   "\x1b[90m"
#define ANSI_COLOR_BRIGHT_RED     "\x1b[91m"
#define ANSI_COLOR_BRIGHT_GREEN   "\x1b[92m"
#define ANSI_COLOR_BRIGHT_YELLOW  "\x1b[93m"
#define ANSI_COLOR_BRIGHT_BLUE    "\x1b[94m"
#define ANSI_COLOR_BRIGHT_MAGENTA "\x1b[95m"
#define ANSI_COLOR_BRIGHT_CYAN    "\x1b[96m"
#define ANSI_COLOR_BRIGHT_WHITE   "\x1b[97m"
#define ANSI_COLOR_ORANGE  "\x1b[38;5;208m"

#define ANSI_BOLD       "\x1b[1m"
#define ANSI_UNDERLINE  "\x1b[4m"
#define ANSI_BLINK      "\x1b[5m"
#define ANSI_REVERSE    "\x1b[7m"


///////////////////////****{ PROTOTYPE OF FUNCTIONS. }***** //////////////////


////////* { Function to print the contents of the blank_array } */////////////////

void printBlankArray(char** blank_array , int row, int col);

void print_grid(char** grid , int row_2d , int col_2d);

//////////*{ Function to print tele_word after te search terminated row wise }* /////////////////

int printTeleWord(char** grid, char** blank_array , int* length_bus , int row, int col);

////////* { Function to check for the word horizontally in both forward and backward directions } */////////////////

bool checkHorizontal(char** grid, char** blank_array , int* length_bus , const char* word, int row, int col, int i, int j);

////////* { Function to check for the word vertically in both forward and backward directions }* ///////////////

bool checkVertical(char** grid, char** blank_array ,  int* length_bus , const char* word, int row, int col, int i, int j);

////////* { Main function to search for the word in the grid/. }* /////////////////

bool search_word(char** grid, char** blank_array , int* length_bus , char* words, int row, int col);

////////* { ALL DIAGONAL FUNCTIONS }* /////////////////////

bool right_diagonal_up(char **letters, char **blank_array , int* length_bus , const char *word, int GridSize, int wordLength);
void Main_search(int g, char **grid, char **blank_array , int* length_bus , char **words, const int row_2d, const int col_2d, int &cp);
bool right_diagonal_down(char** letters, char** blank_array , int* length_bus , const char* word, int GridSize, int wordLength);
bool left_diagonal_up(char** letters, char** blank_array , int* length_bus , const char* word, int GridSize, int wordLength);
bool left_diagonal_down(char** letters, char** blank_array , int* length_bus , const char* word, int GridSize, int wordLength);


