/*
============================================================================
Name : 26.c
Author : Sakina Baranwala
Description :Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
Date: 29th Aug, 2024.
============================================================================
*/



/*Here i have executed the existing executable program (9th problem statement - print the info about the given file)*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char *args[] = {"/home/sakina/my-repo/ninth", "readFile.txt", NULL};

    // Execute the external program
    if (execvp(args[0], args) == -1) {
        perror("execvp failed");
        exit(EXIT_FAILURE);
    }


    return 0;

}



/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ vim 26.c
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 26.c -o 26
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./26
Inode: 1844854
Number of hard links: 1
UID: 1000
GID: 1000
Size: 26 bytes
Block size: 4096 bytes
Number of blocks: 8
Time of last access: Thu Aug 29 08:41:04 2024
Time of last modification: Tue Aug 27 00:28:05 2024
Time of last change: Tue Aug 27 00:34:04 2024
*/
