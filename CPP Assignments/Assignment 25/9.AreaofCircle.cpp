//Define a class Circle and define an instance member function to find the area of the circle.

#include <iostream>
using namespace std;

class Circle
{
    public:
         areaofcircle(float radius)
         {
             return 3.14*radius*radius;
         }
};

int main()
{
    float r;
    cout<<"Enter radius of circle"<< endl;
    cin>>r;
    Circle c1;
    float area =c1.areaofcircle(r);
    cout<<" Area of Circle is : "<< area << endl;
    return 0;
}
