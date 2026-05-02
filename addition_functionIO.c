#include<stdio.h>
int addition(int no1, int no2)
{
    int ans=0;
    ans = no1+no2;
    return ans;
}

int main()
{   
    int a=0,b=0;
    int ret;
    printf("Enter 1st number:\n");
    scanf("%d",&a);
    printf("Enter 2nd number:\n");
    scanf("%d",&b);
    ret=addition(a,b);
    printf("Answer ghe lavdya - %d",ret);
}