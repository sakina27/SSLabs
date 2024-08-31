/*
============================================================================
Name : 15.c
Author : Sakina Baranwala
Description :Write a program to display the environmental variable of the user (use environ).
Date: 27th Aug, 2024.
============================================================================
*/






#include <stdio.h>

extern char **environ; 

int main(void) {
    char **envVariables = environ; 

    
    while (*envVariables) {
        printf("%s\n", *envVariables);
        envVariables++;
    }

    return 0;
}





/*Output:
 *
 * Output for environmental variables is not displayed for safety reasons.
*
/
