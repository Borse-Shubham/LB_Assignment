#include<iostream>
using namespace std;

class Ascii
{
    public:
        char cChar;
    public:
        Ascii(char X)
        {
            cChar =  X;
        }
        bool Display()
        {
            int iCnt = 0;
            if((cChar >= '!' && cChar <= '/') || (cChar >= ':' && cChar <= '@') || (cChar >= '[' && cChar <= '`') || (cChar >= '{' && cChar <= 127))
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

    cout<<"Enter Character : "<<endl;
    cin>>cValue;

    Ascii obj(cValue);

    bRet = obj.Display();

    if(bRet == true)
    {
        cout<<"It is a Special Character...";
    }
    else
    {
        cout<<"It is not a Special Character...";
    }

    return 0;
}