#include<iostream>
using namespace std;
int add(int,int);       //function prototype
void greet();
int main(){
    int num1,num2;
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter Second Number :";
    cin>>num2;
    cout<<"The Sum Is : "<<add(num1,num2);
    greet();
    return 0;
}
int add(int a , int b){
    int c;
    c = a + b;
    return c;
}

void greet(){
    cout<<"\nHello, Good Morning";
}


