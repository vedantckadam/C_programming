#include<stdio.h>

int main()
{
    char str[]="Ganesh";
    char *ptr=NULL;

    ptr=str;                //Address of First Letter 100
    printf("%c\n",*ptr);    
    ptr++;                  //101           

    printf("%c\n",*ptr);    //102
    ptr++;

    printf("%c\n",*ptr);    //103
    ptr++;

    printf("%c\n",*ptr);    //104
    ptr++;

    printf("%c\n",*ptr);    //105
    ptr++;

    return 0;
}