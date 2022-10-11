//10. Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;


int sum(int,int);
float sum(float,float);
float sum(int,float);
int main()
{
    int x,y;
    float m,n;
    cout<<"Enter two integer value ";
    cin>>x>>y;
    cout<<"Enter two float value ";
    cin>>m>>n;
    cout<<"sum of two integer value is "<<sum(x,y)<<endl;
    cout<<"sum of two float value is "<<sum(m,n)<<endl;
    cout<<"sum of one integer and one float value is  "<<sum(x,m);

}

int sum(int x,int y)
{
    return x+y;
}

float sum(float m,float n)
{
    return m+n;
}
float sum(int x,float m)
{
    return x+m;
}
