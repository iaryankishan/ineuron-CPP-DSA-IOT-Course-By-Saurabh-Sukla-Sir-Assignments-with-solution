//Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box.

#include <iostream>
#include <string.h>
using namespace std;
class Box
{
  private:
      int length,breadth,height;

  public :
     Box(int l,int b,int h)
     {
         length=l;
         breadth=b;
         height=h;
     }

      int volumeofBox()
      {
         return (length*breadth*height);
      }

};

int main()
{
    Box b1(3,5,7);
    cout<<"Volume of Box is "<<b1.volumeofBox()<<endl;
    return 0;
}
