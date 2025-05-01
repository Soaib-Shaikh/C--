#include<iostream>
using namespace std;

// 1 2 3 4 5 4 3 2 1
// 1 2 3 4   4 3 2 1
// 1 2 3       3 2 1
// 1 2           2 1
// 1               1

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {

       for(j=1;j<=6-i;j++)
       {
        cout<<j<<" ";
       }

       for(k=1;k<i;k++)
       {
        cout<<"    ";
       }
       for(j=6-i;j>=1;j--)
       {
        cout<<j<<" ";
       }

        cout<<endl;

    }
   
    return 0;
}