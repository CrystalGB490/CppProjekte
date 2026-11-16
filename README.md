# 1. C++ Mini-Bank CLI (Bank.cpp)

A simple, interactive command-line banking simulation written in C++ that lets users manage a virtual gold balance.

## Features

- **Starting Balance:** Begins with an initial balance of `100 Gold`.
- **Deposit & Withdraw:** Easily add gold to your account or withdraw funds.
- **Overdraft Protection:** Prevents withdrawals that exceed your current gold balance.
- **Input Validation:** Handles non-numeric menu inputs safely without crashing or causing infinite loops.
- **Interactive Menu Loop:** Continues running until you choose to exit (`3`).

## Prerequisites

To compile and run this project, you need a standard C++ compiler, such as:

- `g++` (GCC)
- `clang++`
- MSVC (Visual Studio)

## Compilation & Usage

1. **Clone the repository** (or save the code as `minibank.cpp`):
   ```bash
   git clone https://github.com
   cd your-repo-name
   ```

2. **Compile the program:**
   ```bash
   g++ minibank.cpp -o minibank
   ```

3. **Run the Mini-Bank:**
   - **Linux / macOS:**
     ```bash
     ./minibank
     ```
   - **Windows:**
     ```cmd
     minibank.exe
     ```

##  Example Session

```text
--- Welcome to the Mini-Bank ---

Balance: 100 Gold
1. Deposit Gold
2. Withdraw Gold
3. Exit
Choose an option: 1
Enter deposit amount: 490

Balance: 590 Gold
1. Deposit Gold
2. Withdraw Gold
3. Exit
Choose an option: 2
Enter withdrawal amount: 600
Not enough Gold!

Balance: 590 Gold
1. Deposit Gold
2. Withdraw Gold
3. Exit
Choose an option: 3
Goodbye!
```


# 2. C++ CLI Calculator (Calculator.cpp)

A lightweight, interactive command-line calculator written in C++ featuring basic arithmetic operations, result memory, input validation (and a bit of sass).

## Features

- **Basic Arithmetic:** Supports Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
- **Previous Result Memory:** Type `answer` as your first number to reuse the result from your previous calculation.
- **Error Handling & Input Validation:** 
  - Prevents crashes when non-numeric characters are entered.
  - Protects against division by zero.
- **Interactive Loop:** Keeps running until you explicitly decide to quit (`q`).

## Prerequisites

To compile and run this project, you need a C++ compiler supporting **C++11** or higher (due to `std::stod`), such as:

- `g++` (GCC)
- `clang++`
- MSVC (Visual Studio)

## Compilation & Usage

1. **Clone the repository** (or save the code as `calculator.cpp`):
   ```bash
   git clone https://github.com
   cd your-repo-name
   ```

2. **Compile the program:**
   ```bash
   g++ -std=c++11 calculator.cpp -o calculator
   ```

3. **Run the calculator:**
   - **Linux / macOS:**
     ```bash
     ./calculator
     ```
   - **Windows:**
     ```cmd
     calculator.exe
     ```

## Example Session

```text
What do you want to do? ( + (addition), - (subtraction), * (multiplication), / (division), q (quit)): +
Enter your first number (or type 'answer' to use the previous result): 10
Enter your second number: 5
The total of 10 and 5 is: 15

What do you want to do? ( + (addition), - (subtraction), * (multiplication), / (division), q (quit)): *
Enter your first number (or type 'answer' to use the previous result): answer
Enter your second number for multiplication: 2
The total of 15 and 2 is: 30

What do you want to do? ( + (addition), - (subtraction), * (multiplication), / (division), q (quit)): q
Okay, closing the calculator, you meanie...

