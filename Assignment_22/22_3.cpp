#include<iostream>
using namespace std;

class Printing
{
    public:
        int iRow,iCol;

    public:
        Printing(int a, int b)
        {
            iRow = a;
            iCol = b;
        }
        void Pattern()
        {
            int i = 0, j = 0;

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i < j)
                    {
                        cout<<" # ";
                    }
                    else if(i == j)
                    {
                        cout<<" $ ";
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

    cout<<"Enter number of rows : "<<endl;
    cin>>iValue1;
    cout<<"Enter number of Columns : "<<endl;
    cin>>iValue2;

    Printing obj(iValue1, iValue2);

    obj.Pattern();

    return 0;
}