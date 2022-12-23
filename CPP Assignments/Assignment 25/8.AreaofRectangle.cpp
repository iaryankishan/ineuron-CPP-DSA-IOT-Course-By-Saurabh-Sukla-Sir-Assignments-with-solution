//Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include <iostream>
using namespace std;

class Rectangle
{
    public:
         areaofrectangle(int length, int breadth)
         {
             return length*breadth;
         }
};

int main()
{
    int l,b;
    cout<<"Enter length and breadth"<< endl;
    cin>>l>>b;
    Rectangle r1;
    int area =r1.areaofrectangle(l,b);
    cout<<" Area of Rectangle is : "<< area << endl;
    return 0;
}
