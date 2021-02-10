#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void takestring(void);
    void checkbinary(void);
    void onescompliment(void);
    void displaybinary(void);
    int flag = 0;
};

void binary ::takestring()
{
    cout << "Enter Binary Number : ";
    cin >> s;
}
void binary ::checkbinary()
{
    int a;
    a = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "You didn't entered a Binary Number !" << endl;
            break;
        }
        if (s.at(i) == '0' || s.at(i) == '1')
        {
            if (i == (a - 1))
            {
                cout << "Your Entered binary number is : " << s << endl;
                flag = 1;
            }
        }
    }
}

void binary ::onescompliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::displaybinary()
{
    if (flag == 1)
    {
        cout<<"Calculating OnesCompliment Of Your Binary Number........"<<endl;
        cout << "Your Binary Number After Onescompliment : " << s << endl;
    }
    else
    {
        cout<<"Displaying Your Number......."<<endl;
        cout << "Your Number is : " << s << endl;
    }
}

int main()
{
    int holdi;
    binary b;
    b.takestring();
    b.checkbinary();
    if (b.flag == 1)
    {
        b.onescompliment();
    }
    b.displaybinary();
    return 0;
}
