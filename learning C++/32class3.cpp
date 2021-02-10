#include<iostream>
using namespace std;

class shop
{
private:
    int itemid[100];
    int itemprice[100];
    
    int counter2=0;
public:
    int counter=0;
    void setprice(void);
    void getprice(void);
}; 

void shop::setprice()
{
    cout<<"Enter The Id Of Item No. "<<counter+1<<" : ";
    cin>>itemid[counter];
    cout<<"Enter The Price Of Item No. "<<counter+1<<" : ";
    cin>>itemprice[counter];
    counter++;
}
void shop::getprice()
{
    cout<<"ItemId["<<itemid[counter2]<<"] "<<"Item Price : "<<itemprice[counter2]<<endl;
    counter2++;
}

int main(){
    int i,j=0;
    shop sh1;
    while (1)
    {
        sh1.setprice();
        cout<<"To End The Entry Press(1) And To Enter More Entry Press(0) ";
        cin>>i;
        if (i==1)
        {
            break;
        }
        else
        {
            continue;
        }
        
    }
    while (j<sh1.counter)
    {
        sh1.getprice();
        j++;
    }
    
    
    return 0;
}