/*Name: Sakina Baranwala
 * Reg No: MT2024130
 * Problem Statement: Write a program to copy file1 into file2 ($cp file1 file2).*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>


int main(int argc, char *argv[]) {
    int fd1, fd2;
    int sread, written;
    char buffer[32];


    fd1 = open(argv[1], O_RDONLY);
    if (fd1 == -1) {
        perror("Error opening source file");
        return 1;
    }

    fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd2 == -1) {
        perror("Error opening/creating destination file");
        close(fd1);
        return 1;
    }

    while ((sread = read(fd1, buffer, sizeof(buffer))) > 0) {
       written = write(fd2, buffer, sread);
        if (written == -1) {
            perror("Error writing to destination file");
            close(fd1);
            close(fd2);
            return 1;
        }
    }

    if (sread == -1) {
        perror("Error reading from source file");
    }

    close(fd1);
    close(fd2);

    return 0;
}


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat readFile.txt
Hello!
I am the readFile.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./7 readFile.txt writeFile.txt
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat writeFile.txt
Hello!
I am the readFile.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$
*/


