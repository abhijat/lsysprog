#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    const char file_path[] = "/etc/shadow";
    
    int fd = open(file_path, O_RDONLY, "r");
    if (fd == -1) {
        char err_msg[64];
        strerror_r(errno, err_msg, 64);
        fprintf(stderr, "Error: %s\n", err_msg);
    }
    return 0;
}
