//Define a class student and write a program to enter student details using constructor and define member function to display all the details.

#include <iostream>
#include <string.h>
using namespace std;
class Student
{
  private:
      int roll, age;
      char name[25];
      char address[25];

  public :
     Student(int r,char sn[],int a,char sad[])
     {
         roll=r;
         strcpy(name,sn);
         strcpy(address,sad);
         age=a;
     }

      DisplayStudent()
     {
         cout<<"Student 1"<<endl<<"Roll no. " <<roll<<endl<<"Student Name : " <<name<<endl<<"Address - " <<address<< endl;
     }

};

int main()
{
    Student s1(3,"Aryan",19,"PATNA");
    s1.DisplayStudent();
    return 0;
}
