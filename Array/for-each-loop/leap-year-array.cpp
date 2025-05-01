#include<iostream>
using namespace std;

int main()
{
    int year[5],i ;

    for ( i = 0; i < 5; i++)
    {
        cout<<"Enter year "<< i+1 << ": "<<endl;
        cin>>year[i];
    }

    for(i=0;i<5;i++)
    {
        if((year[i] % 4 == 0 && year[i] %100 != 0) || year[i] % 400 == 0)
        {
            cout<<" "<<year[i];
        }
    }
    
    

    return 0;
}