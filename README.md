# OS_EX1: Operating System Exercises - Linux Exploration

Welcome to OS_EX1_1, a collection of exercises designed to help you explore the functionalities and tools available in Linux. Each exercise focuses on a practical application of a specific concept.

## Table of Contents

- [Exercises](#exercises)
- [Getting Started](#getting-started)
- [Prerequisites](#prerequisites)
- [Folder Structure](#folder-structure)
- [Contribution](#contribution)

## Exercises

1. **Compilation and Debugging**: Learn how to debug program crashes using Linux debuggers. Write programs that intentionally crash and analyze the resulting core files.

2. **Using a Library**: Create a program named `Poisson` that calculates the probability of the Poisson distribution, leveraging the math library in C/C++.

3. **Building a Library**: Construct a dynamic library named `libpoisson.so` containing the `poisson` function, and write a program that uses this library.

4. **Code Coverage**: Modify an existing implementation of Dijkstra's shortest path algorithm to accept a new graph from standard input and perform validity checks. Use `gcov` to measure the coverage of your code by your tests.

5. **Profiling**: Implement three solutions to the max subarray sum problem with varying time complexities (n, n^2, and n^3). Profile these solutions using `gprof` to analyze their performance.

6. **Understanding Process Communication**:

Enhance your understanding of system calls like fork(), exec(), and pipes by implementing a phonebook application.
Create two programs: add2PB to add entries and findPhone to search for phone numbers.
Focus on using the mentioned system calls for communication between

## Getting Started

To start working on these exercises, follow these steps:

1. Clone this repository:
    ```bash
    git clone https://github.com/elilfry/OS_EX1_1.git
    ```
2. Navigate to the individual exercise folders for specific instructions and requirements.

## Prerequisites

Before you begin, ensure you have the following:

- A Linux environment
- A C or C++ compiler (e.g., GCC)
- Basic knowledge of C or C++ programming

## Folder Structure

The repository is organized into several directories to keep the different exercises and their associated files separate and manageable. Here's an overview of the repository's structure:

```plaintext
exercise-repo/
├── Exercise_1/
│   ├── code/
│   └── Makefile
├── Exercise_2/
│   ├── code/
│   └── Makefile
├── Exercise_3/
│   ├── code/
│   └── Makefile
├── Exercise_4/
│   ├── code/
│   └── Makefile
├── Exercise_5/
│   ├── code/
│   └── Makefile
└── README.md

