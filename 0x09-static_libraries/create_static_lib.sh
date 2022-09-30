#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcc liball.a *.o
ranlib liball.a
