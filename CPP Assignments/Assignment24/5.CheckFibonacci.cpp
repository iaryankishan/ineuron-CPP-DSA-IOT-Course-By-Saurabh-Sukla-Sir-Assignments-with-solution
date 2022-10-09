// 4.Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

void CheckFibonacci(int);

void CheckFibonacci(int n)
{
    int prev=0,curr=1,result=0,count=0;
    while(result<n)
    {
        result=prev+curr;
        if(result==n)
        {
            count++;
            break;
        }
        prev=curr;
        curr=result;
    }
    if(count>0)
        cout<<"Number is in the series";
    else
        cout<<"Number is not in the series";
}

int main()
{
    int n;
    cout<<"Enter a number to check whether it is in fibonacci series or not  ";
    cin>>n;
    CheckFibonacci(n);
}
