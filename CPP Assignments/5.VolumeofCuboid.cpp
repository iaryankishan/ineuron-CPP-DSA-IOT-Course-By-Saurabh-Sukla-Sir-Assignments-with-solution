//5. Write a C++ program to calculate the volume of a cuboid.


#include <iostream>
using namespace std;
int main()
{
float volume,l,b,h;
cout << "Enter length breadth and height of cuboid ";
cin >> l>>b>>h;
volume=l*b*h;
cout << "Volume of cuboid is "<<volume;
return 0;
}
