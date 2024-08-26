#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fileDes[5];
    const char *files[5] = {"f1.txt", "f2.txt", "f3.txt", "f4.txt", "f5.txt"};

    
    for (int i = 0; i < 5; i++) {
        fileDes[i] = creat(files[i], 0644);
        if (fileDes[i] == -1) {
            perror("Error creating file");
            return 1;
        }
        printf("Created %s with file descriptor: %d\n", files[i], fileDes[i]);
    }

    
    while (1) {
        
    }

  
    for (int i = 0; i < 5; i++) {
        close(fileDes[i]);
    }

    return 0;
}

/*Output:
 *
 * ./infiniteLoopFile &
[2] 4367
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ Created f1.txt with file descriptor: 3
Created f2.txt with file descriptor: 4
Created f3.txt with file descriptor: 5
Created f4.txt with file descriptor: 6
Created f5.txt with file descriptor: 7
^C
sakina@sakina-VivoBook-ASUSLaptop-X515EA-X515EA:~/my-repo$ ls -l /proc/4367/fd/
total 0
lrwx------ 1 sakina sakina 64 Aug 27 00:04 0 -> /dev/pts/0
lrwx------ 1 sakina sakina 64 Aug 27 00:04 1 -> /dev/pts/0
lrwx------ 1 sakina sakina 64 Aug 27 00:04 2 -> /dev/pts/0
l-wx------ 1 sakina sakina 64 Aug 27 00:04 3 -> /home/sakina/my-repo/f1.txt
l-wx------ 1 sakina sakina 64 Aug 27 00:04 4 -> /home/sakina/my-repo/f2.txt
l-wx------ 1 sakina sakina 64 Aug 27 00:04 5 -> /home/sakina/my-repo/f3.txt
l-wx------ 1 sakina sakina 64 Aug 27 00:04 6 -> /home/sakina/my-repo/f4.txt
l-wx------ 1 sakina sakina 64 Aug 27 00:04 7 -> /home/sakina/my-repo/f5.txt
*/
