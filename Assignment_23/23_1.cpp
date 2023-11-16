#include<iostream>
using namespace std;

class Printing
{
    public:
        int iRow,iCol;
    public:
        Printing(int X, int Y)
        {
            iRow = X;
            iCol = Y;
        }
        void Pattern()
        {
            for(int i = iRow; i >= 0; i--)
            {
                for(int j = 0; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<" # ";
                    }
                    else
                    {
                        cout<<" * ";
                    }
                }
                cout<<endl;
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number of Rows : ";
    cin>>iValue1;
    cout<<"Enter number of Columns : ";
    cin>>iValue2;

    Printing obj(iValue1, iValue2);

    obj.Pattern();

    return 0;
}