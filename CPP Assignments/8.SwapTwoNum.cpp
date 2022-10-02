//8. Write a C++ program to swap values of two int variables without using third variable


#include <iostream>
using namespace std;
int main()
{
int x,y;
cout << "Enter a number x=";
cin >> x;
cout << "Enter a number y=";
cin >> y;
x=x+y;
y=x-y;
x=x-y;
cout << "After swap x=" <<x <<" y=" <<y;
return 0;
}
