C - Makefiles
In this project, I practiced writing Makefiles.

Tests ✔️
tests: Folder of test files.
Helper Files 🙌
school.c: C function that displays a seahorse in text. Used for Makefile practice purposes throughout project.

main.c: Main C function that runs the function defined in school.c.

Header File 📁
m.h: Header file defining the function prototype used in school.c.
Tasks 📃
0. make -f 0-Makefile

0-Makefile: Makefile that creates an executable school based on school.c and main.c. Includes:
Rule all that builds the executable.
1. make -f 1-Makefile

1-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 0-Makefile with:
Variable CC that defines the compiler to be used.
Variable SRC that defines the .c files to compile.
The all rule only recompiles updated source files.
2. make -f 2-Makefile

2-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 1-Makefile with:
Variable OBJ that defines the .o files to compile.
Variable NAME that defines the name of the executable.
