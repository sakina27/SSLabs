/*
============================================================================
Name : 6.c
Author : Sakina Baranwala
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 27th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){

	char buffer[32];
	int s_read = read(0, buffer, sizeof(buffer));
	printf("%d\n",s_read);
	fflush(stdout);
	write(1, buffer, sizeof(buffer));
	return 0;
}



/*Output:
 *
 *
 * gcc 6.c -o 6
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./6
Standard Input of SSLabs
25
Standard Input of SSLabs
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$
*/
