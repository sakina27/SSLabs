/*Name: Sakina Baranwala
Reg. No: MT2024130
Problem Statement: Create the following types of a files using (i) shell command (ii) system call
                  b. Hard Link (link system call)*/





#include <stdio.h>
#include <unistd.h>

int main() {

	if (link("/home/sakina/Desktop/SSLabs/HardLinkTarget.txt","/home/sakina/Desktop/SSLabs/NewHardLink.txt") == -1){
		perror("syslink error");
		return 1;
	}

	return 0;
}
