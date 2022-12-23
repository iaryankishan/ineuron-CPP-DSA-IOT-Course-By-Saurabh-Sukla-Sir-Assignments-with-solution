//Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include <iostream>
using namespace std;

class Greatest
{
    public:
         largest(int x,int y,int z)
         {
            if(x>y)
            {
                if(x>z)
                    return x;
            }
            if(y>z)
            {
               return y;
            }
            else
                return z;
         }
};

int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<< endl;
    cin>>a >> b>> c;
    Greatest g1;
    int large=g1.largest(a,b,c);
    cout<<" Largest Number is : "<< large << endl;
    return 0;
}
