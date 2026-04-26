#include<stdio.h>
int main()
{
    char ch='A';
    int i =11;
    float f =90.99f;
    double d =78.67890;

    printf("Size of all variable \n");
    printf("%d\n", sizeof(ch));//1 byte
    printf("%d\n", sizeof(i));//4 byte
    printf("%d\n", sizeof(f));//4 byte
    printf("%u\n", sizeof(d));//8 byte
    
    return 0;
}