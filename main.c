#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>

int main ()
{
    int fd = open("file.txt", O_RDWR);
    char *s;
    s = get_next_line(fd);
    // while(s)
    // {
    //     printf("%s", s);
    //     s = get_next_line(fd);
    // }
    return (0);
}