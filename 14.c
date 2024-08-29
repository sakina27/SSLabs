/*Name: Sakina Baranwala
 * Reg No - MT2024130
 * Problem Statement - 14 Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.*/






#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    struct stat fileInfo;

    if (stat(argv[1], &fileInfo) < 0) {
        perror("Error getting file information");
        return 1;
    }

    if (S_ISREG(fileInfo.st_mode)) {
        printf("%s is a regular file.\n", argv[1]);
    } else if (S_ISDIR(fileInfo.st_mode)) {
        printf("%s is a directory.\n", argv[1]);
    } else if (S_ISCHR(fileInfo.st_mode)) {
        printf("%s is a character device.\n", argv[1]);
    } else if (S_ISBLK(fileInfo.st_mode)) {
        printf("%s is a block device.\n", argv[1]);
    } else if (S_ISFIFO(fileInfo.st_mode)) {
        printf("%s is a FIFO (named pipe).\n", argv[1]);
    } else if (S_ISLNK(fileInfo.st_mode)) {
        printf("%s is a symbolic link.\n", argv[1]);
    } else if (S_ISSOCK(fileInfo.st_mode)) {
        printf("%s is a socket.\n", argv[1]);
    }

   return 0;

}


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./14 /home/sakina/my-repo
/home/sakina/my-repo is a directory.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./14 readFile.txt
readFile.txt is a regular file.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./14 FifoFile
FifoFile is a FIFO (named pipe).
*/
