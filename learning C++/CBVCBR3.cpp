#include<iostream>
using namespace std;

int& swap1(int& x){
    return x;
}

int main(){
    int a=4;
    swap1(a)=100;
    cout<<a;
    return 0;
}