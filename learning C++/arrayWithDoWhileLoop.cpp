#include<iostream>
using namespace std;

int main(){
    int marks[5],i=0;
    do
    {
        cout<<"Enter The Number";
        cin>>marks[i];
        i++;
    } while (i<5);
    do
    {
        cout<<marks[i-1]<<endl;
        i--;
    } while (i>0);
    
    return 0;
}