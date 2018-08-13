#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main()
{
    int fd = open("myfile",O_RDONLY);
    if(fd < 0)
    {
        perror("open");
        return 1;
    }
    const char *msg = "hello bit\n";
    char buf[1024] = {0};
    printf("%d\n",sizeof(buf));
        printf("%d\n",strlen(buf));
    ssize_t s = read(fd,buf,strlen(msg));
    if(s > 0)
    {
        buf[s] = 0;
    }
    //else
    //{
    //    break;
    //}
    close(fd);
    return 0;
}

