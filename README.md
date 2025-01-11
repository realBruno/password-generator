# Password Generator
A mini C program that generates a password of user-memory limited length.

In short, this program can generate a password as long as the memory of the user's device will allow it to and store it in a .txt file.

# Compilation
To run it on your PC, first download the `main.c` file and run either of the commands below depending on your operating system:

* Linux: `gcc -o generator.out generator.c`
* Windows: `x86_64-w64-mingw32-gcc -o generator.exe generator.c`

# speedy.c
This version is, as the name suggests, a faster approach to the generator.

One can insert the length N of the password (such that N >= 8) at the same time s/he evokes the compiled program. For example:


`~$ ./speedy 10`.


A password of length 10 will be save into a .txt file in the same directory that stores `speedy.c`