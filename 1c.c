/*
============================================================================
Name : 1c.c
Author : Sakina Baranwala
Description : Create the following types of a files using (i) shell command (ii) system call
              c. FIFO (mkfifo Library Function or mknod system call)
Date: 29th Aug, 2024.
============================================================================
*/



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
FIFO created successfully.

Using Shell Command:

sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ mkfifo /home/sakina/my-repo/my_fifo2
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ls -l /home/sakina/my-repo/my_fifo2
prw-rw-r-- 1 sakina sakina 0 Aug 29 23:46 /home/sakina/my-repo/my_fifo2
*/
