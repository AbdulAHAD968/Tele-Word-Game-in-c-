# Teleword Solver

**Teleword** is a word puzzle designed by David Ouellet and widely featured in newspapers, including Pakistan's *Dawn*. This project is a C++ solution for finding and solving any Teleword puzzle provided as a text file.

---

## 🧩 How to Play

The puzzle consists of:
- A **15x15 grid of letters**
- A **list of hidden words**

---

**Objective**: Locate each word in the list within the grid. Words may appear forwards or backwards across rows, columns, or diagonals. After identifying all words, the leftover letters, read row by row, spell out the *Teleword solution*.

---

## 📥 Input Format

The program reads from a file named `teleword.txt` with the following format:
1. First 15 lines: The 15x15 grid, with letters separated by commas.
2. A blank line.
3. List of words, separated by commas.

---

**Example Format:**
            R F D H R T N A T N U O C C A
            E E E L S L E A D I N G Y D C
            T H N I L A R O T C A R V E T
            N C T N A I C I T U A E B S R
            I R I W A T K R O T R M T I E
            A E S A O L A S E T O B E G S
            P V T R P I P R I D C A A N S
            R I F D N L C S E D A N C E R
            E R L I K E E L S P R K H R E
            P D N O S R D H E E O E E N M
            A G U O T H A I T A R R R R R
            R U R F T R I N T A N T T A A
            I A S I I A U N S O L E I E F
            N R E N T H R A G R R K R A R
            G D G D P L A Y S R E T I R W


---

## 🔍 Program Features

1. **Grid and Word List Display**: Visualizes the initial grid and list of words.
2. **Word Highlighting**: Highlights each word in sequence upon user input.
3. **Grid Visualization and Teleword Solution**:
    - Displays the grid with only the located words.
    - Shows leftover letters forming the Teleword.
    - Displays the final Teleword.
4. **Statistics**:
    - Time taken to locate each word and overall.
    - Word length and average word length.
    - Distribution of word directions (horizontal, vertical, diagonal) with counts for forwards and backwards orientation.
    - *Teleword Scatter*: Number of rows containing Teleword letters.
    - *Heaviest Row and Column*: Rows and columns most affected by words.

---

## 🚀 Usage

1. **Compile the Program**:
    ```sh
    g++ -o teleword_solver teleword_solver.cpp
    ```

2. **Run the Program**:
    ```sh
    ./teleword_solver teleword
    ```
    > Note: Replace `teleword` with your input file name (excluding the `.txt` extension).

3. **Follow Prompts** to locate and highlight each word, view the Teleword, and see the puzzle statistics.

---

## 📊 Example Output

Displays the solved grid and Teleword solution, followed by the statistics (word times, lengths, total and average times, direction distribution, Teleword scatter, heaviest row/column).

---

## 📋 Requirements

- **C++ Compiler** (e.g., g++)
- **Libraries**: Ensure all additional libraries specified in `teleword_solver.cpp` are available.

---

## 🤝 Contributing

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/AmazingFeature`).
3. Commit changes (`git commit -m 'Add AmazingFeature'`).
4. Push to branch (`git push origin feature/AmazingFeature`).
5. Open a Pull Request.

---

## 📜 License

Distributed under the MIT License. See `LICENSE` for more information.

---

## 📬 Contact

Abdul Ahad  
**LinkedIn**: [linkedin.com/in/abdul-ahad-988305286](https://www.linkedin.com/in/abdul-ahad-988305286/)  
**Email**: [ahad06074@gmail.com](mailto:ahad06074@gmail.com)  
**Project Link**: [Teleword Solver GitHub](https://github.com/AbdulAHAD968/Tele-Word-Game-in-c-/blob/main/main.cpp)  
