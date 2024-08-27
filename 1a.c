/*Name: Sakina Baranwala
*Reg. No: MT2024130
*Problem Statement: Create the following types of a files using (i) shell command (ii) system call
                  a. soft link (symlink system call*/ 



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
 *
 * lrwxrwxrwx 1 sakina sakina    39 Aug 27 17:04 NewSoftLink.txt -> /home/sakina/my-repo/SoftLinkTarget.txt
*/
