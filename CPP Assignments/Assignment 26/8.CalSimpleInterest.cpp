//Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it. Initialise all details using constructor.

#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
  private:
      int principal,year;
      float roi;

  public :
     Bank(int x,float y,int z)
     {
         principal = x;
         roi = y;
         year = z;
     }

      float CalSI()
      {
          return (principal*roi*year)/100;
      }

};

int main()
{
    Bank b1(5000,5.2,7);
    cout<<"Simple Intrest is : Rs "<<b1.CalSI()<<endl;
    return 0;
}
