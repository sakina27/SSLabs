/*
============================================================================
Name : 1a.c
Author : Sakina Baranwala
Description : Create the following types of a files using (i) shell command (ii) system call
              b. Hard link (link system call)
Date: 29th Aug, 2024.
============================================================================
*/





#include <stdio.h>
#include <unistd.h>

int main() {

	if (link("/home/sakina/my-repo/HardLinkTarget.txt","/home/sakina/my-repo/NewHardLink.txt") == -1){
		perror("syslink error");
		return 1;
	}

	return 0;
}



/*Output:
 *
 * Using C code:
 * -rw-rw-r-- 2 sakina sakina     0 Aug 27 11:13 HardLinkTarget.txt
-rw-rw-r-- 2 sakina sakina     0 Aug 27 11:13 NewHardLink.txt

./1b
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat HardLinkTarget.txt
Hi!
This is Hard Link File.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat NewHardLink.txt
Hi!
This is Hard Link File.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ rm HardLinkTarget.txt
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ cat NewHardLink.txt
Hi!
This is Hard Link File
Using Shell Command:

-rw-rw-r-- 2 sakina sakina     0 Aug 29 23:43 HardLinkTarget.txt
-rw-rw-r-- 2 sakina sakina     0 Aug 29 23:43 NewHardLink2.txt


*/.


