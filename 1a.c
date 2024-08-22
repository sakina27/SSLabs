/*Name: Sakina Baranwala
Reg. No: MT2024130
Problem Statement: Create the following types of a files using (i) shell command (ii) system call
                  a. soft link (symlink system call/* 



#include <stdio.h>
#include <unistd.h>

int main() {

	if (symlink("/home/sakina/Desktop/SSLabs/SoftLinkTarget.txt","/home/sakina/Desktop/SSLabs/NewSoftLink.txt") == -1){
		perror("syslink error");
		return 1;
	}

	return 0;
}

