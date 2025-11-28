# **_Printf**

## **Description:**

This repository contains the _printf project that was given to us to do in pairs by Holberton School as part of our learning program.

The goal of this project was:

- To train ourselves to work as a team.
- To design a simple and valid flowchart.
- To comply with the various imposed constraints.
- To translate a diagram into working C code.

This repository provides:

- A complete and validated flowchart.
- The corresponding C implementation.
- The compiler corresponding to the project.

It's one possible solution among others, but here's the one we came up with by creating our flowchart.

![Flowchart of the project](assets/Flowchart_printf2.png)
[Voici le format PDF](assets/Flowchart_printf2.pdf)

## **Objectives**

At the end of the project, we should be able to explain to anyone, without the help of Google:

- Understanding how va_start, va_arg, and va_end work.
- Translate a flowchart into a fully working implementation.
- Work collaboratively within a group of peers.
- Read and design a flowchart describing program logic.
- Produce clean, readable, and maintainable code.
- To be able to explain all the steps of our code.
- Explain clearly how structures work.

## **Requierements**

- The program for our project will be compiled using:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format _printf.c main.c print_i.c print_string.c print_char.c print_p.c main.h print_d.c -o
```
- The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- No more than 5 functions per file.
- The prototypes of all our functions are included in our header file called "main.h".
- All our header files are include guarded.

## **Instruction**

### **Mandatory**

- 0 - I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.
- 1 - Education is when you read the fine print. Experience is what you get if you don't.
- 2 - Just because it's in print doesn't mean it's the gospel.

## **Tech Stack**

- **Language:** C
- **Compiler:** GCC
- **IDE / Editor:** VS Code
- **Operating System:** Linux / Windows

## **File Description**

| **File** | **Description** |
|------------|-----------------------------------------------------------------------------|
| README.md | Project documentation: explains the purpose, installation steps, usage, project structure, and the technologies used. |
| _printf | Folder containing all the files of the project |
| assets | Folder containing the flowchart for the README | 

## **Installation & Usage**

### **Installation**

1 - Clone this repository

- Open your terminal.
- Navigate to the directory where you want to clone the repository.
- Run the following command:
git clone https://github.com/theocaulet/holbertonschool-printf.git

2 - Open the cloned repository.

3 - Compile the program :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format _printf.c main.c print_i.c print_string.c print_char.c print_p.c main.h print_d.c -o
```

### **Usage**

1 - Run the program with the main test file :
```
./prog
```
With the main test file included, you should obtain the following output:
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## **Thanks**

We thank Holberton School for this project and for allowing us to work in pairs.

## **Authors**

### **Florian Roosebeke**
    - Github: https://github.com/FlorianRoosebeke

### **Théo Caulet**
    - Github: https://github.com/theocaulet

