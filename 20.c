/*Name: Sakina Baranwala
 * Reg No - MT2024130
 * Problem Statement - 20. Find out the priority of your running program. Modify the priority with nice command.*/



/* THIS IS DONE THROUGH COMMAND LINE*/





/*Output:
 *
 *
 *
 *sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ nice -n 10 ./2

sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ps -C 2 -o pid,ni,pri,comm
    PID  NI PRI COMMAND
   7919  10   9 2
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ sudo renice 0 -p 7919
7919 (process ID) old priority 10, new priority 0
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ps -C 2 -o pid,ni,pri,comm
    PID  NI PRI COMMAND
   7919   0  19 2
*/
