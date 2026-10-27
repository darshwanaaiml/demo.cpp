#include <iostream>
using namespace std;
class student
{
  private:
    int rollNO;
    string name;
public:
//constructor
  student(int r,string n)  
   {
     rollNO=r;
     name=n;
     cout<<"student object is created "<<endl;
   }
     //member function
     void display()
     { 
        cout<<"Roll Number:"<<rollNO<<endl;
        cout<<"Name:"<<name<<endl;
     }
     //destructor
     ~student()
     {
        cout<<"student objected is destoryed"<<endl;
     }
    };
    int main()
    {
        student s1(101,"Arun");
        s1.display();
        return 0;
    }