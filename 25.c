/*Name: Sakina Baranwala
 * Reg No - MT2024130
 * Problem Statement - 25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).*/








#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int pids[3];
    int pid;
    int i;

    for (i = 0; i < 3; ++i) {
        pid = fork();
        if (pid < 0) {
            perror("fork failed");
            return 1;
        } else if (pid == 0) {
            printf("Child %d: PID = %d, Parent PID = %d\n", i + 1, getpid(), getppid());
            sleep(2);
            exit(i + 1);
        } else {
            pids[i] = pid;
        }
    }

    int status;
    pid_t waited_pid = waitpid(pids[2], &status, 0);  

    if (waited_pid < 0) {
        perror("waitpid failed");
        return 1;
    }

    if (WIFEXITED(status)) {
        printf("Parent: Child with PID %d exited with status %d\n", waited_pid, WEXITSTATUS(status));
    } else {
        printf("Parent: Child with PID %d did not terminate normally\n", waited_pid);
    }

    return 0;

 }


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./25
Child 1: PID = 10854, Parent PID = 10853
Child 2: PID = 10855, Parent PID = 10853
Child 3: PID = 10856, Parent PID = 10853
Parent: Child with PID 10856 exited with status 3
*/
