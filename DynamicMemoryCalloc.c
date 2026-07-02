#include<stdio.h>
#include<stdlib.h>

int main()
{
    //int marks[5];
    float *Marks = NULL; //Pointer

    int size=0;
    int i=0;

    printf("Enter number of Elements:\n");
    scanf("%d",&size);

    //Dynamic Memory Alocation
    Marks=(float*)calloc(size , sizeof(float));
    
    printf("Enter your marks");
    //iteration
    //1    //2   //3
    for(i=0;i<size;i++)
    {
        scanf("%f",Marks[i]);//4
    }

    printf("Entered Marks are");

    for(i=0;i<size;i++)
    {
        printf("%f",Marks[i]);
        
    }
    
    free(Marks);
    return 0;   

}