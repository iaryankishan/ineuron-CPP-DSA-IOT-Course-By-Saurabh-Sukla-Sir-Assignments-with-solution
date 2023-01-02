/*Define a class Bill and define its member function get() to take detail of customer , calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/

#include <iostream>
#include <string.h>
using namespace std;
class Bill
{
  private:
      int c_id,unit_used;
      char c_name[20];

  public :
      void get()
        {
            cout << "Enter customer id: ";
            cin >> c_id;
            cout << "Enter Customer Name: ";
            fflush(stdin);
            gets(c_name);
            cout << "Enter total consume unit: ";
            cin >> unit_used;
        }

      int calculateBill()
        {
            int totalamount = 0;
            if (unit_used <= 100)
            {
                totalamount = unit_used * 1.20f;
            }
            else if (unit_used <= 200)
            {
                totalamount = (100 * 1.20) + (unit_used - 100) * 2.0f;
            }
            else if (unit_used > 200)
            {
                totalamount = (100 * 1.20) + (100 * 2.0) + (unit_used - 200) * 3.0f;
            }
            return totalamount;
       }

};

int main()
{
    Bill b1;
    b1.get();
    cout<<"Total bill is : "<<b1.calculateBill()<<endl;
    return 0;
}
