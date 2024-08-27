/*Name: Sakina Baranwala
Reg. No: MT2024130
Problem Statement: Create the following types of a files using (i) shell command (ii) system call
                 c. FIFO (mkfifo Library Function or mknod system call)*/



#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {

    if (mknod("/home/sakina/my-repo/FifoFile", S_IFIFO, 0) == -1) {
        perror("Error in creating fifo file");
        return 1;
    }

    printf("FIFO created successfully.\n");
    return 0;
}

/*Output:
 *
 * gcc 1c.c -o 1c
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./1c
FIFO created successfully.*/
