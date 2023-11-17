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
        void DisplaySchedule()
        {
            if(Char1 == 65 || Char1 == 97)
            {
                cout<<"Your Exam is at 7 AM..."<<endl;
            }
            else if(Char1 == 66 || Char1 == 98)
            {
                cout<<"Your Exam is at 8:30 AM..."<<endl;
            }
            else if(Char1 == 67 || Char1 == 99)
            {
                cout<<"Your Exam is at 9:20 AM..."<<endl;
            }
            else if(Char1 == 68 || Char1 == 100)
            {
                cout<<"Your Exam is at 10 AM..."<<endl;
            }
            else
            {
                cout<<"Invalid Division"<<endl;
            }
        }
};

int main()
{
    char cValue = '\0';

    cout<<"Enter the Character : "<<endl;
    cin>>cValue;

    Ascii obj(cValue);

    obj.DisplaySchedule();

    return 0;
}