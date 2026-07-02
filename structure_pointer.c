#include<stdio.h>

struct demo
{
    int i;      //4
    int *ptr;   //8
};              //12

int main()
{
    struct demo dobj;
    printf("Sixe of dobj (object od struct) : %lu",sizeof(dobj));// either 8 or 6 depende on operating system........

}