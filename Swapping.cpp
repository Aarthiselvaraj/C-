#include<iostream>
using namespace std;

void swap(float,float);

int main()
{
        float a,b;
        cout<<"Enter Value Of A : ";
        cin>>a;
        cout<<"\nEnter Value of B : ";
        cin>>b;

        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

        swap(a,b);

        cout<<"\nAfter Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
        if(char str[]= "a")
        cout<<"INVALID INPUT,ENTER THE VALID NUMBER";
}



void swap(float a,float b)
{
        int c;
        c=a;
        a=b;
        b=c;
        
}
