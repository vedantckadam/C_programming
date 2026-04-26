#include<stdio.h>
int main()
{
    int arr[4]={10,20,30,40};
    int barr[]={10,20,30,40};
    
    int carr[4];
    carr[0]=10;
    carr[1]=20;
    carr[2]=30;
    carr[3]=40;

    printf("%d\n",carr[0]);
    printf("%d\n",barr[0]);
    printf("%d\n",arr[0]);

    return 0;
}