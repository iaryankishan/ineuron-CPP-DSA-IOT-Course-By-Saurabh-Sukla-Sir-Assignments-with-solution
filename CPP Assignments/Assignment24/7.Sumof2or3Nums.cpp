//7. Write a function using the default argument that is able to add 2 or 3 numbers.


#include<iostream>
using namespace std;

int sum(int,int,int=0);
int main()
{
    int x,y,z;
    cout<<"Enter three numbers ";
    cin>>x>>y>>z;
    cout<<"Sum of three number is "<<sum(x,y,z)<<endl<<endl;
    cout<<"Enter two numbers ";
    cin>>x>>y;
    cout<<"Sum of two numbers is "<<sum(x,y);
}

int sum(int x,int y,int z)
{
    return x+y+z;
}
