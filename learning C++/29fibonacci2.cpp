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
    int a,i=0;
    cout<<"Enter The Term : ";
    cin>>a;
    cout<<"Fibonacci Series till "<<a<<"th term is : ";
    while (i!=a)
    {
        cout<<fib(i)<<" ";
        i++;
    }
    
    return 0;
}