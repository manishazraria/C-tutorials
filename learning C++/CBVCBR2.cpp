#include<iostream>
using namespace std;
void swap1(int& x,int& y){
    int temp;
    temp=x;
    x=y;
    y=temp;

}
int main(){
    int a =4,b=5;
    swap1(a,b);
    cout<<"value of a : "<<a<<endl<<"value of b : "<<b;
    return 0;
}