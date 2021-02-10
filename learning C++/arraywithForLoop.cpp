#include<iostream>
using namespace std;

int main(){
    int marks[5];
    int num;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter marks : ";
        cin>>marks[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    
    return 0;
}