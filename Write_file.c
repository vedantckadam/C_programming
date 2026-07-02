#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0;
    int ret=0;
    char Arr[]="Vedant Kadam";
    fd=open("Vedant.txt",O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        ret=write(fd,Arr,6);
        printf("%d Bytes Wrien in ret",ret);
        printf("File gets open with fd %d",fd);
    }

    close(fd);
    
    return 0;

}