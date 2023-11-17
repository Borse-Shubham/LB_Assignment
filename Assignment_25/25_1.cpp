#include<iostream>
using namespace std;

class Ascii
{
    public:
        void Table()
        {
            int iCnt = 0;
            cout<<" Decimal   Hexadecimal     Ocatal   Character"<<endl;
            for(iCnt = 0; iCnt<=127; iCnt++)
            {
                cout<<"   "<< iCnt <<"            "<< hex << iCnt <<"             "<<oct << iCnt <<"    "<<static_cast<char>(iCnt)<<dec<<endl;   
            }
        }
};

int main()
{
    Ascii obj;

    obj.Table();

    return 0;
}