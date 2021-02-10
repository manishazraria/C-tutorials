//enum gives integer value to your word , and integer value starts from 0

#include<iostream>
using namespace std;
enum meal{breakfast,lunch,dinner};

int main(){
    int i=0;
    
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    while (i<dinner)
    {
        cout<<"hi"<<endl;
        i++;
    }
    meal a=breakfast;
    cout<<a<<endl;
    
    return 0;
}