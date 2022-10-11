//9.Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;

int maxi(int,int);
double maxi(double,double);

int main()
{
    int x,y;
    double m,n;
    cout<<"Enter two integer numbers"<<endl;
    cin>>x>>y;
    cout<<"Greater number is "<<maxi(x,y)<<endl<<endl;
    cout<<"Enter two real numbers"<<endl;
    cin>>m>>n;
    cout<<"Greater Number is "<<maxi(m,n)<<endl;
    return 0;
}

int maxi(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

double maxi(double m,double n)
{
    if(m>n)
        return m;
    else
        return n;
}
