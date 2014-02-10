#include <fcntl.h>
#include <stdio.h>

int main()
{
    const char file[] = "/etc/hosts";
    int i;
    int fd;

    for (i = 0; i < 1000; ++i) {
        fd = open(file, O_RDONLY, "r");
        if (fd == -1) {
            perror("Hosts file");
            break;
        } else {
            fprintf(stdout, "Opened %d\n", fd);
        }
        close(fd);
    }
    return 0;
}
