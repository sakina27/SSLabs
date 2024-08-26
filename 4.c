/*Name : Sakina Baranwala
 * Reg No : MT2024130
 * Problem Statement: 4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.*/


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main() {
    
    int fileDes = open("try.txt", O_RDWR | O_EXCL);

    if (fileDes == -1) {
        perror("Error opening file");
        return 1;
    }
    printf("File opened successfully with file descriptor: %d\n", fileDes);

    close(fileDes);

    return 0;
}



/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 4.c -o openFile
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./openFile
File opened successfully with file descriptor: 3
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ls
1a.c  1b  1b.c  1c  1c.c  2.c  3.c  4.c  a.out  createFile  HardLinkTarget.txt  openFile  readme.md  SoftLinkTarget.txt  try.txt
*/
