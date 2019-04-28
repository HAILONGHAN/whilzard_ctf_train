#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd;
    char buf[100]={0};
    fd = open("flag",0,0);

    read(fd,buf,100);

    write(1,buf,100);

    close(fd);
}
