/*
Pointer Airthmetic:
new address = current address + i*size of data type
*/


#include<iostream>
using namespace std;

int main(){
    int marks[5]={10,20,30,40,50};
    int* a = marks;
    cout<<"The address of ist block of array is : "<<a<<endl;
    cout<<"The value at ist block of array is : "<<*a<<endl;
    cout<<"The value at second block of array is : "<<*(a+1)<<endl;
    cout<<"The value at third block of array is : "<<*(a+2)<<endl;
    cout<<"The value at fourth block of array is : "<<*(a+3)<<endl;
    cout<<"The value at fifth block of array is : "<<*(a+4)<<endl;
    return 0;
}