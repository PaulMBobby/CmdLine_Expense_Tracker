# CLI Expense & Budget Tracker

A C++ command-line personal finance application featuring an interactive CLI menu, expense tracking, dynamic record modification, transaction analysis, and safe memory management. Built entirely using Object-Oriented Programming (OOP) principles and the C++ Standard Template Library (STL).

---

# Overview

The CLI Expense & Budget Tracker is a modular command-line application designed to record, manage, and analyze daily expenses. Built entirely without third-party libraries, this project demonstrates a strong understanding of object-oriented design, dynamic memory management, data encapsulation, and STL-based data processing.

By storing transactions dynamically using `std::vector`, the application efficiently manages expense records while maintaining memory safety and allowing real-time insertion, modification, deletion, and analysis of financial data.

---

# Features

## Expense Management

Creates and stores expense records consisting of:

- Amount
- Category
- Description

Each transaction is encapsulated within an `Expense` object and managed dynamically by the tracker.

## Expense Analysis

Calculates the user's total expenditure and identifies the highest-value transaction.

The application utilizes STL utilities such as `std::pair` to associate expense values with their corresponding categories and descriptions during analysis.

## Dynamic Record Modification

Allows existing transactions to be updated without deleting and recreating records.

Users can modify:

- Amount
- Category
- Description

while preserving the integrity of the remaining ledger.

## Interactive CLI

Provides a menu-driven command-line interface that allows users to:

- Add new expenses
- Modify existing expenses
- Delete expense records
- View all transactions
- Display total expenditure
- Find the highest expense
- Exit the application safely

## Safe Record Deletion

Validates user-selected indices before removing transactions.

Uses `std::vector::erase()` to safely shrink the container without leaving unused elements or causing out-of-bounds access.

---

# Project Structure

```text
.
├── expense_main.cpp
├── expense_functions.cpp
└── README.md
```

### `expense_functions.cpp`

Implements the core application logic, including:

- Expense class
- ExpenseTracker class
- Expense storage
- Transaction modification
- Transaction deletion
- Expense analysis algorithms

### `expense_main.cpp`

Implements the interactive command-line interface and coordinates the complete expense management workflow through a continuous menu-driven loop.

---

# Getting Started

## Prerequisites

- GCC or Clang
- C++11 or later

---

## Compilation

Clone the repository:

```bash
git clone https://github.com/PaulMBobby/Bmp_image_processor.git

cd cli-expense-tracker
```

Compile the project:

```bash
g++ expense_main.cpp -o expense_tracker
```

If you're using GCC and want additional warnings enabled:

```bash
g++ -Wall -Wextra -std=c++11 expense_main.cpp -o expense_tracker
```

---

# Usage

Run the executable:

```bash
./expense_tracker
```

The program will guide you through the following steps:

1. Select an operation from the menu.
2. Enter transaction details when adding an expense.
3. Modify or delete existing transactions using their index.
4. View all expenses or display financial summaries.
5. Exit the application safely.

---

# Processing Pipeline

```text
User Input
     │
     ▼
Interactive CLI
     │
     ▼
ExpenseTracker
     │
     ▼
Process Transaction Data
     │
     ▼
Update Expense Ledger
     │
     ▼
Display Results
```

---

# Technologies Used

- C++
- C++ Standard Template Library (STL)
- Object-Oriented Programming (OOP)
- Dynamic Memory Management
- Command-Line Interface (CLI)

---

# Concepts Demonstrated

- Object-Oriented Programming
- Data encapsulation
- Class-based software architecture
- Dynamic memory management using `std::vector`
- STL containers (`std::vector`)
- STL utilities (`std::pair`)
- Search algorithms
- Data aggregation
- Runtime data modification
- Input validation
- Modular software architecture

---

# Application Specifications

| Property | Implementation |
|----------|----------------|
| Language | C++ |
| Primary Data Structure | `std::vector<Expense>` |
| Interface | Command-Line |
| Programming Paradigm | Object-Oriented Programming |
| Search Complexity | O(n) |
| Data Storage | In-memory |

---

# Future Improvements

- File I/O support for saving and loading expense data
- CSV import/export
- Date and time tracking for transactions
- Category-based filtering
- Expense sorting
- Monthly budget limits and alerts
- Budget analytics and spending reports
- Search functionality
- Improved input validation
- Multi-user support

---

# License

This project is intended for educational and learning purposes.
