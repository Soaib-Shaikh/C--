#include<iostream>
using namespace std;

//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          *

int main()
{
    int i,j,k;
    char ch='*';

    for(i=1;i<=5;i++)
    {
        for(k=4;k>=i;k--)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        for(j=5-i;j<=3;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=4;i++)
    {
            
        for(k=1;k<=i;k++)
        {
            cout<<"  ";
        }
        for(j=4;j>=i;j--)
        {
            cout<<ch<<" ";
        }
        for(j=4-i;j>=1;j--)
        {
            cout<<ch<<" ";
        }

         cout<<endl;

    }

    return 0;
}