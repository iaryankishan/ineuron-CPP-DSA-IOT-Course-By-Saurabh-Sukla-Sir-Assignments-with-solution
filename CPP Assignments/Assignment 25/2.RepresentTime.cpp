// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.

#include<iostream>
using namespace std;

class Time
{
    private:
    int hr,min,sec; //instance member variable
   public:
      void settime(int x,int y,int z) //instance member function
      {
        hr=x;
        min=y;
        sec=z;
      }
    void showtime() //instance member function
    {
        cout<<"Time is ("<<hr<<"hr"<<"  "<<min<<"min"<<"  "<<sec<<"sec)"<<endl<<endl;
    }
};

int main()
{
   Time t1,t2;
   t1.settime(12,45,10);
   t2.settime(6,3,40);
   t1.showtime();
   t2.showtime();
   return 0;
}
