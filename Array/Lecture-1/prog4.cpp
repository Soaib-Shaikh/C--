#include<iostream>
using namespace std;

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        cout<<"element a["<<i<<"]"<<endl;
        cin>>a[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<"array ["<<i<<"]: "<<a[i]<<endl;
    }

    return 0;
}