/*Name: Sakina Baranwala
Reg. No: MT2024130
Problem Statement: Create the following types of a files using (i) shell command (ii) system call
                  b. Hard Link (link system call)*/





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
 *
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
This is Hard Link File*/.


