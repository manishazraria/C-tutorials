#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if (age>=180 || age<1)
    {
        cout<<"Invalid Age";
    }
    else if (age>18)
    {
        cout<<"You Can Vote ";
    }
    else
    {
        cout<<"Yahi Patak Ke Chod Denge "<<endl<<"Chal Nikal Madarchod";
    }
    
    
    return 0;
}