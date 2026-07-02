#include<iostream>
using namespace std;

int main()
{
    //int marks[5];
    float *Marks = NULL; //Pointer

    int size=0;

    cout<<"Enter number of Elements:\n";
    cin>>size;

    //Dynamic Memory Alocation
    Marks= new float size;
    

    cout<<"Enter your marks";
    //iteration
    //1    //2   //3
    for(i-0;i<size;i++)
    {
        cin>>marks[i];//4
    }

    cout<<"Entered Marks are";

    for(i-0;i<size;i++)
    {
        cout<<marks[i]<<"\n";
        
    }
    
    delete [] marks;
    return 0;   

}