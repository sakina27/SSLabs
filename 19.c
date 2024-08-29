/*
============================================================================
Name : 19.c
Author : Sakina Baranwala
Description :Write a program to find out time taken to execute getpid system call. Use time stamp counter.
Date: 29th Aug, 2024.
============================================================================
*/





#include <stdio.h>
#include <stdint.h>
#include <unistd.h>


static __inline__ uint64_t rdtscp(void) {
    unsigned int aux;
    uint64_t x;
    __asm__ volatile ("rdtscp" : "=a" (x) : : "edx", "ecx");
    return x;
}

int main() {
    uint64_t start, end;
    int pid;


    start = rdtscp();

    pid = getpid();

    end = rdtscp();


    printf("PID: %d\n", pid);
    printf("Time taken by getpid(): %lu CPU cycles\n", end - start);

    return 0;
}
/*Output:
 *
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./19
PID: 7429
Time taken by getpid(): 13002 CPU cycles */
