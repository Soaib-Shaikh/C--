#include<iostream>
using namespace std;

// A B C D E
// A B C D
// A B C
// A B
// A

int main()
{
    int i,j;
    char ch;

    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=5;j>=i;j--)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}