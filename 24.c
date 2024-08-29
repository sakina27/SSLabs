/*Name: Sakina Baranwala
 * Reg No - MT2024130
 * Problem Statement - 24. Write a program to create an orphan process.*/






#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int pid;
    pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        printf("Child process (PID: %d) is running...\n", getpid());
        sleep(10); 
        printf("Child process (PID: %d) is now an orphan.\n", getpid());
    } else {
        printf("Parent process (PID: %d) is terminating\n", getpid());
        exit(0);
    }

    return 0;
}




/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./24
Parent process (PID: 10308) is terminating
Child process (PID: 10309) is running...
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ Child process (PID: 10309) is now an orphan.


*/
