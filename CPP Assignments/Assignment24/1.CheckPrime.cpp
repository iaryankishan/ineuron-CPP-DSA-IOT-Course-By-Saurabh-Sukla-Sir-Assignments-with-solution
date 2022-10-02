//1. Define a function to check whether a given number is a Prime number or not.


#include <iostream>
using namespace std;
int checkprime(int);
int main()
{
int x;
cout << "Enter a number" <<endl;
cin>> x;
if(checkprime(x))
cout << "not prime";
else
cout << "prime";
return 0;
}
int checkprime(int num)
{
int i;
for(i=2;i<num;i++)
{
if(num%i==0)
return 1;
}
return 0;
}
