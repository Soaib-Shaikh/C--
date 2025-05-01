#include<iostream>
using namespace std;

// * * * * *
// *       *
// * * * * *
// *       *
// *       *

int main()
{
    int i,j;
    char ch;

    for(i=1;i<=5;i++)
    {
        ch='*';
        for(j=1;j<=5;j++)
        {
            if(i==1 || j==1 || j==5 || i==3)
            {
                cout<<ch<<" ";
            
            }
            else 
            {
                cout<<"  ";
            }
                       
        }
        cout<<endl;
    }

    return 0;
}