//Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number

#include<iostream>
using namespace std;

class Complex
{
    private:
       int a,b; //instance member variable
    public:
       void setdata(int x,int y) //instance member function
       {
          a=x;
          b=y;
       }
    void showdata() //instance member function
    {
        cout<<"real="<<a<<endl<<"imag="<<b;
    }

};
int main()
{
    Complex c1,c2;
    c1.setdata(4,9);
    c2.setdata(12,24);
    c1.showdata();
    cout<<endl;
    c2.showdata();
    return 0;
}
