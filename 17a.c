/*
============================================================================
Name : 17.c
Author : Sakina Baranwala
Description :Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.
Date: 29th Aug, 2024.
============================================================================
*/

/*THIS IS PART I */






#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(){

	int fd, input;
	char buffer[32];

	fd = open("ticket.txt", O_WRONLY);

	if (fd==-1){
		printf("Error in opening file\n");
		return 1;
	}

	printf("Enter the ticket Number: ");
	scanf("%d",&input);

	snprintf(buffer, sizeof(buffer), "%d\n", input);

	write(fd, &buffer, strlen(buffer));

	close(fd);

	return 0;
}


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./17a
Enter the ticket Number: 7000*/
