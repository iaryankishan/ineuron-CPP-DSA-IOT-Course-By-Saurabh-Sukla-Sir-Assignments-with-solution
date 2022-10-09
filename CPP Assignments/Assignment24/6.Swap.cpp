//6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int c;
    c=x;
    x=y;
    y=c;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers"<<endl<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    swap(x,y);
    cout<<"After swap"<<endl<<"x="<<x<<endl<<"y="<<y;
}
