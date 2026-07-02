#include<stdio.h>

struct demo
{
    int i;
    float f;
};

int main()
{
    struct demo arr[4];//32 bytes 
    arr[0].i=11;
    arr[0].f=11.11f;

    arr[1].i=21;
    arr[1].f=21.21f;

    arr[2].i=31;
    arr[2].f=31.31f;
    
    arr[3].i=41;
    arr[3].f=41.41f;

    printf("array arr[0] = %d ",arr[0].i);
    

    return 0;
}