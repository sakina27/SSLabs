#include <stdio.h>
#include <unistd.h>

int main() {

	if (symlink("/home/sakina/Desktop/SSLabs/SoftLinkTarget.txt","/home/sakina/Desktop/SSLabs/NewSoftLink.txt") == -1){
		perror("syslink error");
		return 1;
	}

	return 0;
}

