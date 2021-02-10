#include<iostream>
using namespace std;
int fib(int b){
    if (b<2)
    {
        return 1;
    }
    
    return fib(b-2)+fib(b-1);

}
int main(){
    int a;
    cout<<"Enter The Term : ";
    cin>>a;
    cout<<"The number at "<<a<<"th term is : "<<fib(a);
    return 0;
}