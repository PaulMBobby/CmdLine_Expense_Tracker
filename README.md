# CLI Expense & Budget Tracker

A lightweight **C++ command-line personal finance application** that allows users to record, manage, modify, and analyze daily expenses through an interactive menu-driven interface.

Built entirely using **Object-Oriented Programming (OOP)** principles and the **C++ Standard Template Library (STL)**, the project demonstrates practical implementation of dynamic memory management, encapsulation, modular software design, and data processing algorithms.

---

## Overview

The CLI Expense & Budget Tracker provides a simple yet efficient way to maintain a personal expense ledger directly from the terminal. Transactions are stored dynamically using `std::vector`, allowing the application to grow and shrink safely during runtime while maintaining data integrity.

The project emphasizes clean software architecture by separating the user interface from the application logic, making the codebase easier to maintain and extend.

---

## Features

### Expense Management
- Add new expense records
- Store transaction amount, category, and description
- Dynamically manage records using `std::vector`

### Expense Analysis
- Calculate total expenditure
- Identify the highest-value transaction
- Associate expense amounts with their respective categories and descriptions using `std::pair`

### Record Modification
- Edit existing transactions without deleting them
- Update amount, category, or description independently

### Safe Record Deletion
- Validate transaction indices before deletion
- Remove entries safely using `std::vector::erase()`
- Prevent invalid memory access and out-of-range operations

### Interactive CLI
- Menu-driven interface
- Continuous execution loop until user exits
- Simple and intuitive workflow

---

## Project Structure

```text
.
├── expense_main.cpp
├── expense_functions.cpp
└── README.md
```

### `expense_main.cpp`

Implements the interactive command-line interface.

Responsibilities include:

- Displaying the application menu
- Receiving user input
- Routing user selections
- Managing the application's execution loop

### `expense_functions.cpp`

Contains the application's core logic.

Responsibilities include:

- `Expense` class implementation
- `ExpenseTracker` class implementation
- Expense storage and management
- Search and calculation algorithms
- Transaction modification and deletion

---

## Getting Started

### Prerequisites

- GCC or Clang
- C++11 or later

---

## Compilation

Clone the repository:

```bash
git clone https://github.com/YourUsername/cli-expense-tracker.git

cd cli-expense-tracker
```

Compile the project:

```bash
g++ expense_main.cpp -o expense_tracker
```

Compile with recommended warnings enabled:

```bash
g++ -Wall -Wextra -std=c++11 expense_main.cpp -o expense_tracker
```

---

## Usage

Run the application:

```bash
./expense_tracker
```

The application allows you to:

- Add new expenses
- Modify existing records
- Delete transactions
- View all expenses
- Display total expenditure
- Find the highest expense
- Exit the program safely

---

## Processing Pipeline

```text
            User Input
                 │
                 ▼
      Interactive CLI Menu
                 │
                 ▼
      ExpenseTracker Controller
                 │
                 ▼
     Process Expense Collection
                 │
                 ▼
      Generate Requested Output
```

---

## Technologies Used

- C++
- C++ Standard Template Library (STL)
- Object-Oriented Programming (OOP)
- Command-Line Interface (CLI)
- Dynamic Memory Management (`std::vector`)

---

## Concepts Demonstrated

- Object-Oriented Programming
- Data Encapsulation
- Modular Software Design
- Class-Based Architecture
- Dynamic Memory Management
- STL Containers (`std::vector`)
- STL Utility Classes (`std::pair`)
- Search Algorithms
- Data Aggregation
- Runtime Data Modification
- Input Validation

---

## Application Specifications

| Property | Implementation |
|----------|----------------|
| Language | C++ |
| Interface | Command-Line Interface |
| Primary Data Structure | `std::vector<Expense>` |
| Programming Paradigm | Object-Oriented Programming |
| Search Complexity | O(n) |
| Data Storage | In-Memory |
| Architecture | Modular |

---

## Future Improvements

- Save and load expense data using file I/O (`.txt` / `.csv`)
- Date and time stamping for each transaction
- Category-based filtering and sorting
- Monthly budget limits and alerts
- Advanced input validation
- Expense statistics and visual summaries
- Search transactions by category or description

---

## Learning Outcomes

This project was developed to strengthen practical understanding of:

- C++ class design
- Object-oriented programming principles
- STL containers and algorithms
- Dynamic memory management
- Modular application architecture
- Interactive console application development

---

## License

This project is intended for educational and learning purposes.
