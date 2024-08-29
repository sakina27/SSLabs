/*
============================================================================
Name : 3.c
Author : Sakina Baranwala
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 26th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

	int FileDes = creat("try.txt", 0644);


	if (FileDes == -1){
		perror("Error in creating file");
		return -1;
	}

	printf("File Descriptor Value:%d\n", FileDes);

	close(FileDes);

	return 0;

}



/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ vim 3.c
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ gcc 3.c -o createFile
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./createFile
File Descriptor Value:3
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ls
1a.c  1b  1b.c  1c  1c.c  2.c  3.c  a.out  createFile  HardLinkTarget.txt  readme.md  SoftLinkTarget.txt  try.txt
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$
*/
