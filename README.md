## C Programs for File Operations

This repository contains C programs for various file operations, including word counting, uppercase conversion, and binary file manipulation.

**File Operations**

- **`word_count.c`:** This program reads a text file and counts the number of words it contains. It defines a word as a sequence of characters separated by whitespace.
- **`uppercase.c`:** This program reads a text file and creates a new file containing the same content but in uppercase letters.
- **`write_employee.c`:** This program allows the user to enter details of 5 employees (email, age, and salary) and stores them in a binary file named "employee.bin". Each employee's data is written on a new line in the file.
- **`read_employee.c`:** This program reads employee details from the "employee.bin" file and displays them on the console. Each employee's data is displayed on a single line, with subsequent employees appearing on new lines.

**Instructions**

1. **Compile:** Compile each program using a C compiler (e.g., GCC):
   ```bash
   gcc word_count.c -o word_count
   gcc uppercase.c -o uppercase
   gcc write_employee.c -o write_employee
   gcc read_employee.c -o read_employee
   ```
2. **Run:** Execute the compiled programs:
   ```bash
   ./word_count
   ./uppercase
   ./write_employee
   ./read_employee
   ```


**Example Usage**

- **Word Counting:**
   ```bash
   ./word_count rando_word.txt 
   ```
   This will count the words in the file "rando_word.txt".
- **Uppercase Conversion:**
   ```bash
   ./uppercase rando_word.txt
   ```
   This will create a new file named "uppercase_file.txt" containing the uppercase version of "rando_word.txt".
- **Binary File Operations:**
   ```bash
   ./write_employee
   ./read_employee
   ```
   This will first prompt you to enter employee details, write them to "employee.bin", and then read and display the data from the file.

- **Note:**
    Ensure that the input files (e.g., "rando_word.txt", "employee.bin") are in the same directory as the compiled programs.
