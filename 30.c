/*
============================================================================
 * Name: 30.c
 * Author: Sakina Baranwala
 * Description: Write a program to run a script at a specific time using a Daemon process.
 * Date: 29th August 2024 
============================================================================
*/




#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>
#include <signal.h>

#define SCRIPT_PATH "/home/sakina/my-repo/scriptFile.sh" 

void daemonize() {
    int pid;
    pid = fork();

    if (pid < 0) {
        return ;
    }
    if (pid > 0) {
        return ;
    }
    if (setsid() < 0) {
        return ;
    }

    signal(SIGCHLD, SIG_IGN);

    pid = fork();

    
    if (pid < 0) {
        return ;
    }

    if (pid > 0) {
        return ;
    }

    umask(0);
    chdir("/");

    for (int x = sysconf(_SC_OPEN_MAX); x >= 0; x--) {
        close(x);
    }
}

void run_script_at_time(int hour, int minute) {
    while (1) {
        time_t now = time(NULL);
        struct tm *local_time = localtime(&now);

        if (local_time->tm_hour == hour && local_time->tm_min == minute) {
            system(SCRIPT_PATH);
            sleep(60); 
        }

        sleep(1); 
    }
}

int main() {
    int hour = 23;   //(24-hour format)
    int minute = 27; 

    daemonize(); // Turn this process into a daemon

    run_script_at_time(hour, minute);

    return 0;
}


/*Output:
 *
 * sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ./30
Hello World! This script file is executed at 11:27pm daily.
*/
