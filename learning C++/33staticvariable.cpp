//static variable created for class and does not replicate with no of objects, this static
//variable remains the same,and default value of static value is 0
//and static function are those function who contains or use only static variable


#include<iostream>
using namespace std;

class employee
{
private:
    int id;
    static int employeecount;
public:
    void getdata(void);
    void printdata(void);    
};
void employee::getdata()
{
    cout<<"Enter The Id Of The Employee : ";
    cin>>id;
    employeecount++;
}
void employee::printdata()
{
    cout<<"employee id : "<<id<<" No of employee : "<<employeecount<<endl;
}
int employee::employeecount;

int main(){
    employee e1;
    employee e2;
    employee e3;

    e1.getdata();
    e1.printdata();
    e2.getdata();
    e2.printdata();
    e3.getdata();
    e3.printdata();
    return 0;
}