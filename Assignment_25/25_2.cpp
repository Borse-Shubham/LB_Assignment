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
            if(cChar >= 'a' && cChar <= 'z')
            {
                cout<< char(cChar-32);
            }
            else if(cChar >= 'A' && cChar <= 'Z')
            {
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