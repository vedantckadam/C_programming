#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0;
    fd=unlink("Vedant.txt");
    return 0;
}