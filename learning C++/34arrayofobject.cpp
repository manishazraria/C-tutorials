#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empid, empsallry;
    string empname;

public:
    void getinfo(void);
    void printinfo(void);
};

void Employee::getinfo()
{
    cout<<"\nEnter Employee Name : ";
    cin>>empname;
    cout<<"Enter Employee Id : ";
    cin>>empid;
    cout<<"Enter Employee Salrry : ";
    cin>>empsallry;
}
void Employee::printinfo()
{
    cout<<"\nEmployee Name -> "<<empname<<endl;
    cout<<"Employee Id -> "<<empid<<endl;
    cout<<"Employee Sallry -> "<<empsallry<<endl;


}

int main()
{
    Employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        emp[i].getinfo();
        emp[i].printinfo();  
    }
     
    return 0;
}