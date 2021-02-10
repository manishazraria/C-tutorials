#include<iostream>
using namespace std;

class Employee
{
   private:
           int a,b,c;
   public:
           int d,e,f,g;
          void setdata(int x,int y,int z);
          void getdata(){
              cout<<"Value of a is "<<a<<endl;
              cout<<"Value of b is "<<b<<endl;
              cout<<"Value of c is "<<c<<endl;
              cout<<"Value of d is "<<d<<endl;
              cout<<"Value of e is "<<e<<endl;
              cout<<"Value of f is "<<f<<endl;
              cout<<"Value of g is "<<g<<endl;
          }
         void restdata(int d1,int e1){
             d=d1;
             e=e1;
         }     
};

void Employee :: setdata(int x,int y,int z){
    a=x;
    b=y;
    c=z;

}

int main(){
    Employee manish;
    manish.f=70;
    manish.g=80;
    manish.restdata(50,60);
    manish.setdata(20,30,40);
    manish.getdata();
    return 0;
}