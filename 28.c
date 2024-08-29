/*
============================================================================
Name : 28.c
Author : Sakina Baranwala
Description :Write a program to get maximum and minimum real time priority.
Date: 29th Aug, 2024.
============================================================================
*/






#include <stdio.h>
#include <sched.h>
#include <errno.h>

int main() {
    int maxmiumPriority, minimumPriority;

    maxmiumPriority = sched_get_priority_max(SCHED_FIFO);
    if (maxmiumPriority == -1) {
        perror("Error in getting max priority");
        return 1;
    }

    minimumPriority = sched_get_priority_min(SCHED_FIFO);
    if (minimumPriority == -1) {
        perror("Error in getting min priority");
        return 1;
    }

    printf("Maximum real-time priority: %d\n", maxmiumPriority);
    printf("Minimum real-time priority: %d\n", minimumPriority);

    return 0;
}



/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./28
Maximum real-time priority: 99
Minimum real-time priority: 1
*/
