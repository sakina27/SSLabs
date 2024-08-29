/*
============================================================================
Name : 1a.c
Author : Sakina Baranwala
Description : Create the following types of a files using (i) shell command (ii) system call
              a. soft link (symlink system call)
Date: 29th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>

int main() {

	if (symlink("/home/sakina/my-repo/SoftLinkTarget.txt","/home/sakina/my-repo/NewSoftLink.txt") == -1){
		perror("syslink error");
		return 1;
	}

	return 0;
}


/*Output:
 * Using C code:
 * lrwxrwxrwx 1 sakina sakina    39 Aug 27 17:04 NewSoftLink.txt -> /home/sakina/my-repo/SoftLinkTarget.txt
 *
 *
 * Using Shell Command:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ln -s SoftLinkTarget2.txt NewSoftLink2.txt
lrwxrwxrwx 1 sakina sakina    19 Aug 29 23:38 NewSoftLink2.txt -> SoftLinkTarget2.txt

*/
