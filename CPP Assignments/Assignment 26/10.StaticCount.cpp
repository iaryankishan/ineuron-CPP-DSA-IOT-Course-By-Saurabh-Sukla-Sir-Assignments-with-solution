//Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.

#include <iostream>
#include <string.h>
using namespace std;
class StaticCount
{
  private:
      static int c;

  public :
      static int fun()
      {
        return c++;
      }
      static int getCount()
      {
          return c;
      }
};
int StaticCount::c=0;
int main()
{
   StaticCount::fun();
   StaticCount::fun();
   StaticCount::fun();
   StaticCount::fun();
   cout<<"Total No. of times called : "<<StaticCount::getCount();
    return 0;
}
