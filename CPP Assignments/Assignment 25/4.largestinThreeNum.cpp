//Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.

#include<iostream>
using namespace std;

class LargestNumber
{
private:
int a,b,c,hig;
public:
   void setdata(int x,int y,int z)
   {
       a=x;
       b=y;
       c=z;
   }

   int getA()
   {
    return a;
   }

   int getB()
   {
    return b;
   }

   int getC()
   {
    return c;
   }

   int Getlargest()
   {
    return hig;
   }

   void calclargest()
   {
    if(a>b)
    {
        if(a>c)
        hig=a;
        else
        hig=c;
    }
    if(b>c)
      hig=b;
      else
      hig=c;
   }
   
  
};

int main()
{
 LargestNumber l1;
 l1.setdata(5,8,6);
 l1.calclargest();
 cout<<"Largest Number in "<<" "<<l1.getA()<<" "<<l1.getB()<<" "<<l1.getC()<<" "<<" is "<<l1.Getlargest()<<endl;
 return 0;
}
