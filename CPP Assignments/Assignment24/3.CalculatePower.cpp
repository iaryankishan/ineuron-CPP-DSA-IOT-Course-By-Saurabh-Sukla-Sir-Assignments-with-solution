//3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

int power(int num,int p)
{
    int i,result=1;
    for(i=1;i<=p;i++)
    {
        result*=num;
    }
    return result;
}
int main()
{
    int num,p;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout<<"Enter exponent"<<endl;
    cin>>p;
    cout<<"Result is "<<power(num,p);
}
