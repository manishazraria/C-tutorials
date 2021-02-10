#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age :";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You Can Vote";
        break;
    case 12:
        cout<<"You Can Not Vote";
        break;
    case 4:
        cout<<"Invalid Age";
        break;    
    default:
        cout<<"Mujhe Maaf Kre Mujhe Nhi Pta";
        break;
    }
    return 0;
}