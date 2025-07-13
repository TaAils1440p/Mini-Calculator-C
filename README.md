# Mini Calculator (C Language)

A simple terminal-based calculator program written in C.  
This project demonstrates basic C syntax, user input handling, conditional logic, and terminal interaction.

---

## 📋 Features

- Interactive text-based menu
- Four basic operations: Addition, Subtraction, Multiplication, Division
- Input validation (e.g., division by zero)
- Loop to allow multiple calculations
- Clean and easy-to-read output

---

## 🚀 How to Run

### 1. Clone or download the project

```bash
git clone repo_url
cd reponame
```

### 2. Compile using make
```bash
make
```

> If you don't have make, you can compile manually:
```bash
gcc main.c -o mini_calculator
```

### 3. Run the programm
```bash
./mini_calculator
```

## 🧼 Clean build

```bash
make clean
```

To clean and rebuild:
```bash
make rebuild
```

## 💡 Example Output
```pgsql
=== Mini Calculator ===
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Choose an option (1-5): 1

Enter the first number: 12
Enter the second number: 8

Result: 12.00 + 8.00 = 20.00

Do you want to perform another calculation? (y/n): y
```

## 🛠 Requirements
- GCC compiler (or any C compiler)
- Make (optional, for easier building)
- A terminal (Linux, macOS, or Windows with Git Bash / CMD / PowerShell)

## 📁 Files
| File                | Description           |
| ------------------- | --------------------- |
| `mini_calculator.c` | Main C source code    |
| `Makefile`          | Build automation file |
| `README.md`         | Project documentation |


## 🧠 Learning Objectives
- Practice using `printf`, `scanf`, and basic loops
- Work with control structures like `switch` and `do-while`
- Understand how to structure a simple interactive program in C

## 📄 License
This project is open source and free to use.

## ✍️ Author
TaAils1440p