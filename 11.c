/*
============================================================================
Name : 11.c
Author : Sakina Baranwala
Description :Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl
Date: 27th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int f1, f2, f3, f4;
    int b_written;

    f1 = open("writeFile5.txt", O_WRONLY | O_APPEND | O_CREAT, 0644);
    if (f1 < 0) {
        perror("Error opening file");
        return 1;
    }

   
    f2 = dup(f1);
    if (f2 < 0) {
        perror("Error duplicating with dup");
        close(f1);
        return 1;
    }

    f3 = dup2(f1, 100); 
    if (f3 < 0) {
        perror("Error duplicating with dup2");
        close(f1);
        close(f2);
        return 1;
    }

    
    f4 = fcntl(f1, F_DUPFD, 0);
    if (f4 < 0) {
        perror("Error duplicating with fcntl");
        close(f1);
        close(f2);
        close(f3);
        return 1;
    }

    
    b_written = write(f1, "Hello from f1\n", 15);
    if (b_written < 0) {
        perror("Error with f1");
    }

   
    b_written = write(f2, "Hello from f2\n", 15);
    if (b_written < 0) {
        perror("Error with f2");
    }

    b_written = write(f3, "Hello from f3\n", 15);
    if (b_written < 0) {
        perror("Error with f3");
    }

    
    b_written = write(f4, "Hello from f4\n", 15);
    if (b_written < 0) {
        perror("Error with f4");
    }

    
    close(f1);
    close(f2);
    close(f3);
    close(f4);

    return 0;
}


/*Output:
 *
 *
 *sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 11.c -o 11
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./11
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat writeFile5.txt
Hello from f1
Hello from f2
Hello from f3
Hello from f4
*/
