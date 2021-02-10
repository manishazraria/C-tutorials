#include<iostream>
using namespace std;

int main(){
    float num,a=0,i=1,z=0;
    float fact=1;
    cout<<"Enter A number : ";
    cin>>num;
    while (a<num)
    {
        for(i; i < num; i++)
        {
          if (z==0)
          {
            fact=num*(num-i);
            i++;
            z++;
            break;
          }
          if (z>0)
          {
              fact=fact*(num-i);
          }
          
          
        }
        a++;
    }
    
    
    cout<<fact;
    
    
    return 0;
}