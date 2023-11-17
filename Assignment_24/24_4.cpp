#include<iostream>
using namespace std;

class Ascii
{
    public:
        char Char1;
    public:
        Ascii(char X)
        {
            Char1 = X;
        }
        bool ChkDigit()
        {
            if(Char1 >= 'a' && Char1 <= 'z')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the Character : "<<endl;
    cin>>cValue;

    Ascii obj(cValue);

    bRet = obj.ChkDigit();

    if(bRet == true)
    {
        cout<<"It is a Small case character..."<<endl;
    }
    else
    {
        cout<<"It is not a small case character..."<<endl;
    }

    return 0;
}