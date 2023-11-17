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
        bool ChkCapital()
        {
            if(Char1 <= 'A' && Char1 >= 'Z')
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

    bRet = obj.ChkCapital();

    if(bRet == true)
    {
        cout<<"It is Capital Character..."<<endl;
    }
    else
    {
        cout<<"It is not a Capital Character..."<<endl;
    }

    return 0;
}