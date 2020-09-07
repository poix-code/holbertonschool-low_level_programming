#!/bin/bash
gcc -Wall -Werror -Wextra -pdenatic -fPIC -c *.c
gcc -shared -o liball.so *.o
