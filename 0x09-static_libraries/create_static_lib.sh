#!/bin/bash
gcc -Wall -pedantic -werror -Wextra -c *.c
ar -rc liballa *o
ranlib liball.a
