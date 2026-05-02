#include<stdio.h>

int no=11;//Global Variable(data)
double d=9.89898988988;
void fun (){
    int i=69;//local Variable(stack)
    printf("inside fun i=%d\n",i);
    printf("inside fun no=%d\n",no);
}

int main(){
    int i=96;//local Variable(stack)
    printf("inside main  i=%d\n",i);
    printf("inside main  no=%d\n",no);

    fun();
    return 0; 
}