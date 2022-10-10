//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;

int area(int,int);
float area(float);
float area(float,float);

int main()
{
    float radius,height,base;
    int length,breadth;

    cout<<"Enter length and breadth of rectangle ";
    cin>>length>>breadth;
    cout<<"Area of rectangle is "<<area(length,breadth);

    cout<<endl<<endl<<"Enter Radius of a circle ";
    cin>>radius;
    cout<<"Area of circle is "<<area(radius);

    cout<<endl<<endl<<"Enter base and height of triangle ";
    cin>>base>>height;
    cout<<"Area of triangle is "<<area(base,height);
}

int area(int length,int breadth)
{
    return length*breadth;
}

float area(float radius)
{
    return 3.14*radius*radius;
}

float area(float base,float height)
{
    return (base*height)/2;
}
