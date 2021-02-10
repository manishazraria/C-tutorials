//union is similar to structure but in this we can only use one variable of union
#include<iostream>
using namespace std;
union employee
{
    int empid;
    char empgrade;
    float empsallry;
};

int main(){
    union employee emp1;
    emp1.empid=1000;
    // emp1.empsallry=20000;
    cout<<emp1.empid;
    return 0;
}