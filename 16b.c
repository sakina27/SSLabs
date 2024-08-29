/*Name:Sakina Baranwala
 * Reg No : MT2024130
 * Problem Statement: 16. Write a program to perform mandatory locking.
b. Implement read lock
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    

    int f = open(argv[1], O_RDWR);
    struct flock lock;

    lock.l_type = F_RDLCK; 
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;
    lock.l_pid = getpid();

    fcntl(f, F_SETLK, &lock);

    printf("Read lock set.\n");

    printf("File locked for Reading. Press Enter to release lock...\n");
    getchar();

    // Unlock
    lock.l_type=F_UNLCK;
    fcntl(f, F_SETLK, &lock);
    printf("File unlocked.");

    close(f);
    return 0;
}

/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo/tmp$ ./16b readFile.txt
Read lock set.
File locked for Reading. Press Enter to release lock...

File unlocked.*/
