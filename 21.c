/*
============================================================================
Name : 21.c
Author : Sakina Baranwala
Description :Write a program, call fork and print the parent and child process id.
Date: 29th Aug, 2024.
============================================================================
*/






#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int pid;

    
    pid = fork();

    if (pid < 0) {
        
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        
        printf("Child process: PID = %d, Parent PID = %d\n", getpid(), getppid());
    } else {
        
        printf("Parent process: PID = %d, Child PID = %d\n", getpid(), pid);
    }

    return 0;
}



/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./21
Parent process: PID = 8921, Child PID = 8922
Child process: PID = 8922, Parent PID = 8921
*/
