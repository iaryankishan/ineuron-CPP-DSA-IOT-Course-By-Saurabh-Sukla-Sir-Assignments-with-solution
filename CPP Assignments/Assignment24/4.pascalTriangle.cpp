//4. Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;

void pascal(int);
int comb(int,int);
int fact(int);


void pascal(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<=i;j++)
        {
         cout<<comb(i,j);
        }
     cout<<endl;
    }
}

int comb(int i,int j)
{
      return fact(i)/(fact(j)*fact(i-j));
}

int fact(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
        fac*=i;
    return fac;
}

int main()
{
    int n;
    cout<<"Enter number of lines of a pascal triangle  ";
    cin>>n;
    pascal(n);
}
