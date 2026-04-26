#include<stdio.h>
int main()
{
    
    int i =10;
    const int j=10;
    printf("j=%d\n",j);
    printf("i=%d\n",i);
    i++;//Allowed
    j++;//Not allowed

    printf("value oh i after increment %d\n",i);//11
    printf("value oh j after decrement %d\n",j);//9
    return 0;
}