#include<iostream>
using namespace std;
double fact(int a){
  if (a<=1)
  {
    return 1;
  }
  
  return a*fact(a-1);
}
int main(){
  double num;
  cout<<"Enter The Number : ";
  cin>>num;
  cout<<"Factorial Of "<<num<<" is "<<fact(num);
  return 0;
}