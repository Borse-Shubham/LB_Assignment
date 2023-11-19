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
            cout<<int(cChar);
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