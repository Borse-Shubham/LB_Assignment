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
        void Display()
        {
            int iCnt = 0;
            if(cChar >= 'a' && cChar <= 'z')
            {
                for(iCnt = cChar; iCnt <= 'z'; iCnt++)
                {
                    cout<< char(iCnt)<<endl;;
                }
            }
            else if(cChar >= 'A' && cChar <= 'Z')
            {
                for(iCnt = cChar; iCnt <= 'Z'; iCnt++)
                {
                    cout<< char(iCnt)<<endl;;
                }
                cout<< char(cChar + 32);
            }
        }
};

int main()
{
    char cValue = '\0';

    cout<<"Enter Character : "<<endl;
    cin>>cValue;

    Ascii obj(cValue);

    obj.Display();

    return 0;
}