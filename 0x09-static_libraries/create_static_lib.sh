#!/bin/bash

#compile all the .c files in the current directory to object files
gcc -c -Wall -Werror -Wextra *.c

#create the library.
ar -rc liball.a *.o

#indexing the library.
ranlib liball.a
