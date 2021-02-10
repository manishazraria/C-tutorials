#include<iostream>
using namespace std;

int money(int actMoney,float factor=2.0){ //this1.04 is default value of factor, if we do not give 
     return actMoney*factor;                                      //give any value to factor at the time of fun call
                                           //then this 1.04 is used

}

int main(){
    int paisa=1000;
    cout<<money(paisa)<<endl;
    cout<<money(paisa,4);
    return 0;
}