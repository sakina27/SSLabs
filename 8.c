/*Name : Sakina Baranwala
 * reg no - MT2024130
 * Problem statement: 8. Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.
*/



#include <stdio.h>

int main() {
    FILE *f;
    char buffer[256]; 

    f = fopen("readFile2.txt", "r");

    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }

 
    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        printf("%s", buffer);
    }

    fclose(f);

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


