#include<iostream>
using namespace std;

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}