//Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include<iostream>
using namespace std;

class ReverseNumber
{
private:
int num,n1,rev=0,rem=0;
public:
   void setdata(int x)
   {
      num=x;
   }

   int getdata()
   {
     return num;
   }

   int getrev()
   {
     return rev;
   }

   void reverse()
   {
       n1=num;
     while(n1!=0)
     {
        rem = n1%10;
        rev = rev*10 + rem;
        n1 = n1/10;
     }
   }

};

int main()
{
 ReverseNumber r1;
 r1.setdata(456);
 r1.reverse();
 cout<<"Reverse of "<<r1.getdata()<<" is "<<r1.getrev()<<endl;
 return 0;
}
