#include <stdio.h>
#include <unistd.h>

int main() {

	if (link("/home/sakina/Desktop/SSLabs/HardLinkTarget.txt","/home/sakina/Desktop/SSLabs/NewHardLink.txt") == -1){
		perror("syslink error");
		return 1;
	}

	return 0;
}
