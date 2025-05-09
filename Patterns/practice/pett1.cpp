#include<iostream>
using namespace std;

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
        for(k=1;k<i;k++)
        {
            cout<<"  ";
        }

        for(j=1;j<=(6-i)*2-1;j++)
        {
            cout<<ch<<" ";    
        }

        cout<<endl;
    }
    return 0;
}