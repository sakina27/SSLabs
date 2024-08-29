/*
============================================================================
Name : 27a.c
Author : Sakina Baranwala
Description :Write a program to execute ls -Rl by the following system calls
c. execle
Date: 29th Aug, 2024.
============================================================================
*/






#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    
    char *env[] = { NULL };

    
    execle("/bin/ls", "ls", "-Rl", (char *) NULL, env);

    
    perror("execle failed");
    return 1;
}

/*Output:
total 764
-rwxrwxr-x 1 sakina sakina 16224 Aug 27 12:04 10
-rw-rw-r-- 1 sakina sakina  1744 Aug 29 08:42 10.c
-rwxrwxr-x 1 sakina sakina 16208 Aug 27 12:59 11
-rw-rw-r-- 1 sakina sakina  1861 Aug 29 08:42 11.c
-rwxrwxr-x 1 sakina sakina 16128 Aug 27 16:27 12
-rw-rw-r-- 1 sakina sakina  1154 Aug 27 16:29 12.c
-rwxrwxr-x 1 sakina sakina 16096 Aug 27 16:42 13
-rw-rw-r-- 1 sakina sakina  1123 Aug 27 16:44 13.c
-rwxrwxr-x 1 sakina sakina 16096 Aug 27 16:55 14
-rw-rw-r-- 1 sakina sakina  1293 Aug 27 17:07 14.c
-rwxrwxr-x 1 sakina sakina 16024 Aug 27 17:11 15
-rw-rw-r-- 1 sakina sakina  3723 Aug 27 17:13 15.c
-rwxrwxr-x 1 sakina sakina 16264 Aug 29 09:00 16
-rw-rw-r-- 1 sakina sakina  1086 Aug 29 11:34 16.c
-rw-rw-r-- 1 sakina sakina   934 Aug 29 09:25 16a.c
-rw-rw-r-- 1 sakina sakina   926 Aug 29 09:30 16b.c
-rw-rw-r-- 1 sakina sakina   924 Aug 29 11:37 17.c
-rwxrwxr-x 1 sakina sakina 16296 Aug 29 12:15 17a
-rw-rw-r-- 1 sakina sakina   940 Aug 29 12:18 17a.c
-rwxrwxr-x 1 sakina sakina 16376 Aug 29 12:15 17b
-rw-rw-r-- 1 sakina sakina  1520 Aug 29 12:17 17b.c
-rwxrwxr-x 1 sakina sakina 16512 Aug 29 13:07 18
-rw-rw-r-- 1 sakina sakina  2468 Aug 29 14:49 18.c
-rwxrwxr-x 1 sakina sakina 16032 Aug 29 14:10 19
-rw-rw-r-- 1 sakina sakina   766 Aug 29 14:12 19.c
-rwxrwxr-x 1 sakina sakina 16000 Aug 27 17:04 1a
-rw-rw-r-- 1 sakina sakina   541 Aug 27 17:05 1a.c
-rwxrwxr-x 1 sakina sakina 16000 Aug 27 17:16 1b
-rw-rw-r-- 1 sakina sakina   973 Aug 27 17:19 1b.c
-rwxrwxr-x 1 sakina sakina 16040 Aug 27 17:00 1c
-rw-rw-r-- 1 sakina sakina   643 Aug 27 17:01 1c.c
-rwxrwxr-x 1 sakina sakina 15776 Aug 29 14:21 2
-rw-rw-r-- 1 sakina sakina  1941 Aug 26 23:24 2.c
-rw-rw-r-- 1 sakina sakina   695 Aug 29 14:28 20.c
-rwxrwxr-x 1 sakina sakina 16128 Aug 29 14:37 21
-rw-rw-r-- 1 sakina sakina   763 Aug 29 14:40 21.c
-rwxrwxr-x 1 sakina sakina 16208 Aug 29 14:53 22
-rw-rw-r-- 1 sakina sakina  1263 Aug 29 14:59 22.c
-rwxrwxr-x 1 sakina sakina 16248 Aug 29 15:02 23
-rw-rw-r-- 1 sakina sakina   927 Aug 29 15:04 23.c
-rwxrwxr-x 1 sakina sakina 16168 Aug 29 15:23 24
-rw-rw-r-- 1 sakina sakina   913 Aug 29 15:11 24.c
-rwxrwxr-x 1 sakina sakina 16312 Aug 29 15:23 25
-rw-rw-r-- 1 sakina sakina  1419 Aug 29 15:25 25.c
-rwxrwxr-x 1 sakina sakina 16096 Aug 29 15:45 26
-rw-rw-r-- 1 sakina sakina  1179 Aug 29 15:48 26.c
-rwxrwxr-x 1 sakina sakina 16000 Aug 29 15:57 27a
-rw-rw-r-- 1 sakina sakina  5447 Aug 29 16:02 27a.c
-rwxrwxr-x 1 sakina sakina 16000 Aug 29 15:57 27b
-rw-rw-r-- 1 sakina sakina  5457 Aug 29 16:03 27b.c
-rwxrwxr-x 1 sakina sakina 16056 Aug 29 15:57 27c
-rw-rw-r-- 1 sakina sakina   230 Aug 29 15:55 27c.c
-rwxrwxr-x 1 sakina sakina 16056 Aug 29 15:57 27d
-rw-rw-r-- 1 sakina sakina   210 Aug 29 15:56 27d.c
-rwxrwxr-x 1 sakina sakina 16056 Aug 29 15:58 27e
-rw-rw-r-- 1 sakina sakina   210 Aug 29 15:57 27e.c
-rw-rw-r-- 1 sakina sakina   935 Aug 26 23:50 3.c
-rw-rw-r-- 1 sakina sakina   923 Aug 26 23:57 4.c
-rw-rw-r-- 1 sakina sakina  1524 Aug 27 00:05 5.c
-rwxrwxr-x 1 sakina sakina 16176 Aug 27 00:12 6
-rw-rw-r-- 1 sakina sakina   611 Aug 27 00:14 6.c
-rwxrwxr-x 1 sakina sakina 16176 Aug 27 00:26 7
-rw-rw-r-- 1 sakina sakina  1410 Aug 29 11:42 7.c
-rwxrwxr-x 1 sakina sakina 16176 Aug 29 08:40 8
-rw-rw-r-- 1 sakina sakina  1918 Aug 29 11:57 8.c
-rwxrwxr-x 1 sakina sakina 16136 Aug 29 15:39 9
-rw-rw-r-- 1 sakina sakina  1603 Aug 29 15:39 9.c
p--------- 1 sakina sakina     0 Aug 27 17:00 FifoFile
-rw-rw-r-- 1 sakina sakina    28 Aug 27 17:16 NewHardLink.txt
lrwxrwxrwx 1 sakina sakina    39 Aug 27 17:04 NewSoftLink.txt -> /home/sakina/my-repo/SoftLinkTarget.txt
-rw-rw-r-- 1 sakina sakina     0 Aug 20 10:46 SoftLinkTarget.txt
-rwxrwxr-x 1 sakina sakina 16224 Aug 27 12:03 a.out
-rwxrwxr-x 1 sakina sakina 16088 Aug 26 23:48 createFile
-rw-r--r-- 1 sakina sakina     0 Aug 27 00:02 f1.txt
-rw-r--r-- 1 sakina sakina     0 Aug 27 00:02 f2.txt
-rw-r--r-- 1 sakina sakina     0 Aug 27 00:02 f3.txt
-rw-r--r-- 1 sakina sakina     0 Aug 27 00:02 f4.txt
-rw-r--r-- 1 sakina sakina     0 Aug 27 00:02 f5.txt
-rwxrwxr-x 1 sakina sakina 16096 Aug 27 00:02 infiniteLoopFile
-rwxrwxr-x 1 sakina sakina 16136 Aug 27 13:01 ninth
-rwxrwxr-x 1 sakina sakina 16088 Aug 26 23:56 openFile
-rw-rw-r-- 1 sakina sakina    26 Aug 27 00:28 readFile.txt
-rw-rw-r-- 1 sakina sakina   661 Aug 27 11:04 readFile2.txt
-rw-rw-r-- 1 sakina sakina     0 Aug 22 08:09 readme.md
-rw-rw-r-- 1 sakina sakina    80 Aug 29 13:07 recordFile.txt
-rw-rw-r-- 1 sakina sakina     5 Aug 29 12:15 ticket.txt
drwxrwxr-x 2 sakina sakina  4096 Aug 29 09:32 tmp
-rw-r--r-- 1 sakina sakina     0 Aug 26 23:48 try.txt
-rw-rwSr-- 1 sakina sakina    28 Aug 29 09:21 writeFile.txt
-rw-r--r-- 1 sakina sakina    30 Aug 27 12:04 writeFile2.txt
-rw-r--r-- 1 sakina sakina   120 Aug 27 12:49 writeFile3.txt
-rw-r--r-- 1 sakina sakina    61 Aug 27 12:55 writeFile4.txt
-rw-r--r-- 1 sakina sakina    63 Aug 29 14:53 writeFile5.txt

./tmp:
total 36
-rwxrwxr-x 1 sakina sakina 16264 Aug 29 09:19 16a
-rwxrwxr-x 1 sakina sakina 16264 Aug 29 09:30 16b
-rw-rw-r-- 1 sakina sakina    36 Aug 29 09:04 writefile.txt
*/
