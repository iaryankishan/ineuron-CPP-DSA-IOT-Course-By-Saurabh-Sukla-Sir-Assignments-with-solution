/* Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex) */

#include <iostream>

using namespace std;
class Complex
{
private :
    int real,img;
public:
    void setdata(int x,int y)
    {
        real=x;
        img=y;
    }
    void showdata()
    {
       cout <<"Real : "<<real<<  " imaginary : "<<img <<endl;
    }

    Complex add(Complex Z)
    {
        Complex X;
        X.real = real + Z.real;
        X.img = img + Z.img;
        return X;
    }

};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,6);
    c2.setdata(7,8);
    c1.showdata();
    c2.showdata();
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}
