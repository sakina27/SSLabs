/*
============================================================================
Name : 13.c
Author : Sakina Baranwala
Description :Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
Date: 27th Aug, 2024.
============================================================================
*/





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>

int main() {
    fd_set readfds;
    struct timeval timeout;
    int retval;
    FD_ZERO(&readfds);
    FD_SET(STDIN_FILENO, &readfds);

    
    timeout.tv_sec = 10;
    timeout.tv_usec = 0;

    retval = select(STDIN_FILENO + 1, &readfds, NULL, NULL, &timeout);

    if (retval == -1) {
        perror("select");
    } else if (retval) {
        printf("Data is available on STDIN.\n");
    } else {
        printf("No data within 10 seconds.\n");
    }

    return 0;
}


/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./13
No data within 10 seconds.
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ vim 13.c
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./13
abcd
Data is available on STDIN.
*/
