# Make file

- Files 

1. [0-Makefile](0-Makefile)

Create your first Makefile.
Requirements:
- name of the executable: school
- rules: all
- The all rule builds your executable
- variables: none

2. [1-Makefile](1-Makefile)

Requirements:
- name of the executable: school
- rules: all
- The all rule builds your executable
- variables: CC, SRC
- CC: the compiler to be used
- SRC: the .c files

3. [2-Makefile](2-Makefile)
Create your first useful Makefile.
Requirements:
- name of the executable: school
- rules: all
- The all rule builds your executable
- variables: CC, SRC, OBJ, NAME
- CC: the compiler to be used
- SRC: the .c files
- OBJ: the .o files
- NAME: the name of the executable
- The all rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files


Requirements:

name of the executable: school
rules: all, clean, oclean, fclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files
