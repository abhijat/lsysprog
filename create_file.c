#include <fcntl.h>
#include <stdio.h>

int main()
{
    const char file[] = "/tmp/xyz123";
    int fd;

    fd = creat(file, 0600);
    if (fd == -1) {
        perror("Create syscall");
    } else {
        printf("Created file\n");
    }
    close(fd);
    return 0;
}
