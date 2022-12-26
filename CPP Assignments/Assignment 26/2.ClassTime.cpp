/* Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */


#include <iostream>

using namespace std;
class Time
{
private :
    int h,m,s;
public:
    void settime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showtime()
    {
       cout <<h <<" : Hour  "<<m <<" : Minute  "<<s <<" : Second  "  <<endl;
    }
    void normalize()
    {

    }
    Time add(Time T)
    {
       Time temp;
        int totalTime = h * 60 * 60 + m * 60 + s + T.h * 60 * 60 + T.m * 60 + T.s;
        temp.h = totalTime / (60 * 60);
        totalTime = totalTime % (60 * 60);
        temp.m = totalTime / 60;
        totalTime = totalTime % 60;
        temp.s = totalTime;
        return temp;
    }
};
int main()
{
  Time t1, t2, t3;
    t1.settime(5, 35, 16);
    t2.settime(2, 45, 10);
    t1.showtime();
    t2.showtime();
    t3 = t1.add(t2);
    t3.showtime();
    return 0;
}
