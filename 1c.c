#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {

    if (mknod("home/sakina/Desktop/SSLabs/FifoFile", S_IFIFO, 0) == -1) {
        perror("Error in creating fifo file");
        return 1;
    }

    printf("FIFO created successfully.\n");
    return 0;
}
