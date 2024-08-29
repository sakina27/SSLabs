/*
============================================================================
Name : 8.c
Author : Sakina Baranwala
Description :Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.
Date: 27th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int f;
    char buffer[256]; 

    f = open(argv[1], O_RDONLY);

    if (f <  0) {
        perror("Error opening file");
        return 1;
    }

    
    int bytesRead;
    char *lineStart = buffer;
    int i = 0;

    while ((bytesRead = read(f, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[bytesRead] = '\0'; 

        
        for (i = 0; i < bytesRead; i++) {
            if (buffer[i] == '\n' || buffer[i] == '\0') {
                buffer[i] = '\0';
                printf("%s\n", lineStart); 
                lineStart = &buffer[i + 1]; 
            }
        }
    }

    close(f);

    return 0;
}


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 8.c -o 8
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ vim readFile2.txt
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./8
Software systems are complex frameworks or applications designed to solve specific problems
They consist of multiple interconnected components working together to perform designated functions
The physical devices required for the system to function, including computers, servers, storage devices, and networking equipment.
The information processed and managed by the software system, including databases, files, and real-time data streams.
Users, developers, administrators, and other stakeholders who interact with or manage the software system.
    Specialized systems designed to perform dedicated functions within larger mechanical or electrical systems.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ */ 


