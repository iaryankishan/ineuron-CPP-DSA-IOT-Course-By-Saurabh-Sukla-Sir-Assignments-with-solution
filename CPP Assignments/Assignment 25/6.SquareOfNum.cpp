//Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include<iostream>
using namespace std;

class SquareOfNum
{

public:
     square(int num)
     {
        static int call;
         call++;
         cout<<call<<" Times function is called ";
         cout<< num*num <<endl;
         return 0;
     }
};

int main()
{
 SquareOfNum s1;
 s1.square(5);
 s1.square(8);
 s1.square(12);
 s1.square(25);
 return 0;
}
