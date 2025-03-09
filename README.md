[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/NqT6D9pg)
# Manual
1. We are giving starter codes for Vala. But if you used different language, feel free to override the whole repository.
2. When you accept the invite link, a separate fork repo will be created in your github space.
3. Clone the forked repo to your local computer
4. Create a readme which state your identity and add instruction in how to compile and run your program
5. Replace any sources with your codes manually by copy paste from your sources
6. Make commit and push to your repo
7. That's it, any commit you made will get notified in the master repo. Please do not make a pull request to the master.

Apologize for the delay, it's relatively hard to setup initial github classroom since the repo need to be configured in strictly specific condition.

-------------------------------------------------------------------------------------------------------------

# My Identity
- **Name:** Dandy Arya Akbar
- **NIM:** 1313623028
- **Class of:** 2023
- **Class Sector:** A
- **Study Program:** Computer Science

# How to Compile and Run My Submission Source Code (C++ Instructions)

## Pre-Requisites
- A C++ compiler that supports C++11 or higher (e.g., `g++` or `clang++`).
- Optionally, CMake (if using a build system).

---

## **Compiling Directly With G++**
1. **Clone this specific fork:**

    Open a terminal and run:
    ```bash
    git clone https://github.com/IlkomUNJ/heap-sort-implementation-SKYTEXCoder.git
    cd heap-sort-implementation-SKYTEXCoder
    ```

2. **Compile the source code:**

    Using that same terminal, run:
    ```bash
    cd src
    g++ -std=c++17 -o {desired_executable_name} heap_data_structure_using_primitive_array.cpp
    ```
    Replace {desired_executable_name} with a relatively simple and short name that you're comfortable with, e.g. "main" or "submission"

3. **Run the compiled executable:**

    Finally, using a terminal that's already navigated into within the src/ directory, run the following terminal commands in order to run the compiled executable:
    ```bash
    ./{desired_executable_name}
    ```
    Don't forget to replace {desired_executable_name} with the name that you gave the program to in the previous step.