#include<iostream>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E 

int main()
{
    int i,j;
    char ch;

    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}