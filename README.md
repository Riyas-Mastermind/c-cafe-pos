# C-Cafe System

A lightweight, terminal-based system written in C designed to manage cafe orders, validate user inputs, calculate taxes, and generate itemized receipts.

## Features

* **Interactive Menu & Ordering:** Allows users to select items and specify quantities using parallel array architecture.
* **Smart Receipt Generation:** Utilizes sequential conditional checks to print only the items actually purchased, avoiding unselected entries.
* **Robust Input Validation:** Implements strict `scanf` return checks to handle invalid text inputs safely and prevent program crashes.
* **Automated Financial Calculations:** Computes individual item subtotals, overall subtotal, CGST (9%), SGST (9%), and the final invoice grand total.

## Getting Started

### Prerequisites
* A standard C compiler (such as `gcc`).

### Compilation and Execution

1. Clone or download the source files.
2. Compile the source code using your terminal:
   ```bash
   gcc main.c -o main
   ```
3. Run:
   ```bash
   ./main
   ```
### Author
-> M Mohammed Riyaz
