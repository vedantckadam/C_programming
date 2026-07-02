#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0;
    int ret=0;
    char Arr[20];

    fd=open("Vedant.txt",O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        ret=read(fd,Arr,6);
        printf("%d Bytes Wrien in ret\n",ret);
        printf("File gets open with fd %d\n",fd);
        printf("%s/n",Arr);
    }

    close(fd);
    
    return 0;

}