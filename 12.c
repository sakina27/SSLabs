/*Name: Sakina baranwala
 * reg no - MT2024130
 * Problem Statement - 12. Write a program to find out the opening mode of a file. Use fcntl.*/



#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    
    int fileDes = open("readFile.txt", O_RDWR | O_CREAT | O_APPEND, 0644);
    if (fileDes < 0) {
        perror("Error opening file");
        return 1;
    }


    int flags = fcntl(fileDes, F_GETFL);  
    if (flags == -1) {
        perror("error in fcntl");
        return 1;
    }

    
    int access_mode = flags & O_ACCMODE;

    if (access_mode == O_RDONLY) {
        printf("The file is opened in read-only mode.\n");
    } else if (access_mode == O_WRONLY) {
        printf("The file is opened in write-only mode.\n");
    } else if (access_mode == O_RDWR) {
        printf("The file is opened in read-write mode.\n");
    } else {
        printf("Unknown file access mode.\n");
    }

    close(fileDes);

    return 0;

}

/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 12.c -o 12
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./12
The file is opened in read-write mode.*/
