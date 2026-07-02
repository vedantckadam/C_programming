#include<stdio.h>

int main
{
    float Marks[10]; //40 byte

    printf("enter your marks:");
    scanf("%f",&Marks[0]);              //sequence
    scanf("%f",&Marks[1]);
    scanf("%f",&Marks[2]);
    scanf("%f",&Marks[3]);
    scanf("%f",&Marks[4]);
    
    printf("Enter marks are :");
    printf("%f",Marks[0]);
    printf("%f",Marks[1]);
    printf("%f",Marks[2]);
    printf("%f",Marks[3]);

    return 0;
}