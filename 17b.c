/*Name: Sakina Baranwala
 * Reg no: MT2024130
 * Problem Statment: 17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.*/





#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

	int fd;

	fd=open("ticket.txt", O_RDONLY);
	if (fd==-1){
		perror("Error in opening the file");
	  return 1;
	 }

	struct flock lock;
	lock.l_type = F_WRLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 0;

	fcntl(fd, F_SETLK, &lock);

	char buffer[32];

	read(fd, buffer, sizeof(buffer));

	int ticket_number = atoi(buffer);

	printf("Current ticket number: %d\n", ticket_number);

	ticket_number++;

	snprintf(buffer, sizeof(buffer), "%d\n", ticket_number);

	write(fd, buffer, strlen(buffer));

	printf("New Ticket Number: %d\n", ticket_number);

	//unlock
	
	lock.l_type = F_UNLCK;

	fcntl(fd, F_SETLK, &lock);


	close(fd);


	return 0;
}


/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./17a
Enter the ticket Number: 7000
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 17b.c -o 17b
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./17b
Current ticket number: 7000
New Ticket Number: 7001
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ */
