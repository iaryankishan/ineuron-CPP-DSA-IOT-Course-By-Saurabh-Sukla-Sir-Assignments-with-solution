//Define a class Factorial and define an instance member function to find the Factorial of a number using class.

#include<iostream>
using namespace std;

class Factorial
{
  private:
  int n,fact; //instance member variables
  public:
  void setN(int x) //instance member function
  {
    n=x;
  }

  int getN() //instance member function
  {
    return n;
  }

  int getfactorial() //instance member function
  {
      return fact;
  }

  void calfactorial() //instance member function
  {
    int i,f=1;
  for(i=1;i<=n;i++)
    f*=i;
    fact=f;
  }

};

int main()
{
 Factorial f1,f2;
 f1.setN(5);
 f2.setN(6);
 f1.calfactorial();
 f2.calfactorial();

 cout<<"Factorial of "<<f1.getN()<<" is "<<f1.getfactorial()<<endl;
 cout<<"Factorial of "<<f2.getN()<<" is "<<f2.getfactorial()<<endl;

 return 0;
}
