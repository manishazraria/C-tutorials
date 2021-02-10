#include<iostream>
using namespace std;
void swap1(int,int);
void swap2(int*,int*);


int main(){
    int a=4,b=5;
    swap1(a,b);
    cout<<"values after running swap1 function : "<<endl<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    swap2(&a,&b);
    cout<<"values after running swap2 function : "<<endl<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    return 0;
}

void swap1(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swap2(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
};
