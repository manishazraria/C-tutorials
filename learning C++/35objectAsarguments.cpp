#include<iostream>
using namespace std;

class Complex
{
  public:
  int a,b;
  void getcomplex(void);
  void psumcomplex(Complex o1,Complex o2);

};

void Complex::getcomplex()
{
    cout<<"\nEnter Actual Number : ";
    cin>>a;
    cout<<"Enter Imaginary Number : ";
    cin>>b;
    cout<<"Your Complex Number is : "<<a<<"+"<<b<<"i"<<endl;
}

void Complex::psumcomplex(Complex o1,Complex o2)
{
  a=o1.a+o2.a;
  b=o1.b+o2.b;
  cout<<"Sum Of Complex Number Is : "<<a<<"+"<<b<<"i"<<endl;
}

int main(){
    Complex c1,c2,c3;
    c1.getcomplex();
    c2.getcomplex();
    c3.psumcomplex(c1,c2);
    return 0;
}