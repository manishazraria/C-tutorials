#include<iostream>
using namespace std;
struct employee
{
    int empid;
    float sallry;
    char grad;
};

int main(){
    struct employee  emp1,emp2;
    emp1.empid = 1009;
    emp1.sallry = 2000000;
    emp1.grad = 'A';
    emp2.empid = 2000;

    cout<<emp1.empid<<endl<<emp1.sallry<<endl<<emp1.grad<<endl;
    cout<<emp2.empid;
    return 0;
}