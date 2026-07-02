#include<stdio.h>

struct hello {
    float f;        //4 byte
    int arr[3];     //12 byte
}hobj;              //16 byte

int main(){
    hobj.f=98.87f;
    hobj.arr[0]=10;
    hobj.arr[1]=20;
    hobj.arr[2]=30;

    printf("f=%f\n",hobj.f);
    printf("array : %d\t%d\t%d\n",hobj.arr[0],hobj.arr[1],hobj.arr[2]);

    return 0;
}