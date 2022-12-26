//Define a class Date and write a program to Display Date and initialise date object using Constructors.

#include <iostream>
using namespace std;
class Date
{
  private:
      int dd,mm,yy;

  public :
      Date(int x,int y,int z)
      {
          dd = x;
          mm = y;
          yy = z;
      }
      void showDate()
      {
          cout<<"DD = " << dd << " MM = " << mm << " YY = " << yy << endl;
      }

};

int main()
{
    Date d1(24,6,2022);
    d1.showDate();
    return 0;
}
