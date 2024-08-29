/*Name: Sakina Baranwala
* Reg No-MT2024130
* Problem Statement: 22. Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.*/




#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>

int main() {
    int f;
    int pid;

   
    f = open("writeFile5.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    pid = fork();

    if (pid < 0) {
      
        perror("fork failed");
        return 1;
    } else if (pid == 0) {

        const char *childText = "Hi! This is the child process.\n";
        write(f, childText, strlen(childText));
        printf("Writing through child process\n");
    } else {
        const char *parentText = "Hi! This is the parent process.\n";
        write(f, parentText, strlen(parentText));
        printf("Writing through parent process\n");
    }
    
    close(f);

    return 0;
}


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./22
Writing through parent process
Writing through child process
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat writeFile5.txt
Hi! This is the parent process.
Hi! This is the child process.
*/
