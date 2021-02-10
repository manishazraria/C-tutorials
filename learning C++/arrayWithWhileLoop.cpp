#include<iostream>
using namespace std;

int main(){
    int marks[5];
    int i=0,j=0;
    while (i<5)
    {
        cout<<"Enter Marks :";
        cin>>marks[i];
        i++;
    }
    while (j<5)
    {
        cout<<marks[j]<<endl;
        j++;
    }
    
    return 0;
}