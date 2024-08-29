/*
============================================================================
Name : 10.c
Author : Sakina Baranwala
Description :10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.
Date: 27th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;
    int bytes_written;
    off_t offset;
    char buffer1[] = "SAKINAABCD";  
    char buffer2[] = "BARANWALAA";  

    
    fd = open("writeFile2.txt", O_RDWR | O_CREAT, 0644);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    
    bytes_written = write(fd, buffer1, 10);
    if (bytes_written != 10) {
        perror("Error writing to file");
        close(fd);
        return 1;
    }

    
    offset = lseek(fd, 10, SEEK_CUR);
    if (offset == (off_t)-1) {
        perror("Error seeking in file");
        close(fd);
        return 1;
    }
    printf("lseek() return value: %ld\n", offset);

   
    bytes_written = write(fd, buffer2, 10);
    if (bytes_written != 10) {
        perror("Error writing to file");
        close(fd);
        return 1;
    }
    close(fd);
    return 0;
}

/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./10
lseek() return value: 20
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat writeFile2.txt
SAKINAABCDBARANWALAAsakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ vim 10.c
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ od -c writeFile2.txt
0000000   S   A   K   I   N   A   A   B   C   D  \0  \0  \0  \0  \0  \0
0000020  \0  \0  \0  \0   B   A   R   A   N   W   A   L   A   A
0000036
*/


