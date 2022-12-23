//Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.

#include <iostream>
using namespace std;
class Area
{
public:
    double areaOfCircle(float radius)
    {
        return 3.14*r*r;
    }
    int areaOfRectangle(float length, float breadth)
    {
        return length * breadth;
    }
    int areaOfSquare(float side)
    {
        return side * side;
    }
};
int main()
{
    Area a1;
    cout<< "Area of circle for radius is: " << a1.areaOfCircle(8) << endl;
    cout<< "Area of rectangle  is: " << a1.areaOfRectangle(4, 8) << endl;
    cout<< "Area of square is: " << a1.areaOfSquare(9) << endl;
    return 0;
}
