//Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include <iostream>
using namespace std;
class Cube
{
  private :
      int x;

  public :
     Cube(int a)
      {
        x=a;
      }

     int volume()
      {
       return x*x*x;
      }
};

int main()
{
    Cube c1(5),c2(3);

    cout<<"Volume of cube is : "<<c1.volume()<<endl;
    cout<<"Volume of cube is : "<<c2.volume();
    return 0;
}
