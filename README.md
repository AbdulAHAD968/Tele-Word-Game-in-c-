# Teleword Solver

Teleword is a word puzzle designed by David Ouellet that appears in the leisure columns of newspapers around the world, including the daily Dawn in Pakistan. This project aims to solve any Teleword puzzle provided as a text file.

## How to Play

The game consists of a 15x15 grid of letters and a list of words. The goal is to find all the words in the list within the grid. The words can appear forwards or backwards in rows, columns, or diagonals. Once all words are found, the leftover letters (those not part of any word) spell out the Teleword when read row by row.

## Input Format

The input to the program is a text file named `teleword.txt`. The file format is as follows:
1. The first 15 lines contain the 15x15 grid of letters, with each letter separated by a comma.
2. An empty line.
3. A list of words, each separated by a comma.

Example:  [teleword.txt]


## Program Features

1. **Grid and Word List Display**: The program initially displays the 15x15 grid and the list of words.
2. **Word Highlighting**: Upon a key press, the next word is highlighted in the grid.
3. **Finding and Displaying Words**: When all words have been found, the program displays:
    - A grid with only the letters forming the words.
    - A grid with the leftover letters.
    - The Teleword spelled out by the leftover letters.

4. **Statistics**: The program displays the following statistics:
    - Time to find each word.
    - Length of each word.
    - Total time taken to solve the puzzle.
    - Average word length.
    - Word distribution (horizontal, vertical, diagonal) with counts of forward and backward words.
    - Teleword scatter (number of rows touched by Teleword letters).
    - Heaviest row and heaviest column (most touched by words).

## Usage

1. **Compile the program**:
    ```sh
    g++ -o teleword_solver teleword_solver.cpp
    ```

2. **Run the program**:
    ```sh
    ./teleword_solver teleword
    ```

    Replace `teleword` with the name of your input file (without the `.txt` extension).

3. **Follow the prompts** to find and highlight each word. 

## Example Output

The output will display the grids and the Teleword, along with statistics such as time taken to find each word, word length, total time, average word length, word distribution, Teleword scatter, and the heaviest row and column.

## Requirements

- C++ compiler (e.g., g++)
- Any additional libraries specified in your `teleword_solver.cpp` file

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

Distributed under the MIT License. See `LICENSE` for more information.

## Contact

AbdulAhad - [linkdin-handle](https://www.linkedin.com/in/abdul-ahad-988305286/) 

Email [ahad06074@gmail.com]

Project Link: [https://github.com/AbdulAHAD968/Tele-Word-Game-in-c-/blob/main/main.cpp]

