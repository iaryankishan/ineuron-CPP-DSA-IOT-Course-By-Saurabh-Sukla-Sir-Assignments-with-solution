//2. Define a function to find the highest value digit in a given number.

#include <iostream>
using namespace std;

int highest(int x)
{
    int hig=0,j=0;
    while(x!=0)
    {
        j=x%10;
        if(hig<j)
        {
           hig=j;
        }
      x=x/10;
    }
return hig;
}

int main()
{
    int x;
cout << "Enter more than two digit number"<<endl;
cin>> x;
cout<<highest(x)<<" is highest";
return 0;
}
