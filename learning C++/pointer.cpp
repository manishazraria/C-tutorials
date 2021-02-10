#include<iostream>
using namespace std;

int main(){
    int a =10,ma=20;
    int* b = &a;     //we created a pointer b which containing the address of b,(&)->refrence var
    int* c;
    c=&ma;
    cout<<b<<endl;        //this will print address stored in b
    cout<<*b<<endl;      // this will print the value at address, (*)-> derefrence variable
    cout<<c<<endl;
    cout<<*c;
    return 0;
}
