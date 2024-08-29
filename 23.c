/*
============================================================================
Name : 23.c
Author : Sakina Baranwala
Description :Write a program to create a Zombie state of the running program.
Date: 29th Aug, 2024.
============================================================================
*/






#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        printf("Child process (PID: %d) starts exit...\n", getpid());
        exit(0); 
    } else {
        printf("Parent process (PID: %d) is sleeping...\n", getpid());
        sleep(10); //child becomes zombie

        wait(NULL);
        printf("zombie child process is cleaned up by parent process\n");
    }

    return 0;
}



/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./23
Parent process (PID: 9960) is sleeping...
Child process (PID: 9961) starts exit...
zombie child process is cleaned up by parent process
*/
