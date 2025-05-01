#include<iostream>
using namespace std;

int main()
{
    int a[5], b[5], c[5],i ;

    cout << "Enter values for the 'a': "<<endl;;
    for(i=0;i<5;i++)
    {
        cout<<"Enter "<<i<<" : "<<endl;
        cin>>a[i];
    }

    cout <<endl<< "Enter values for the 'b': ";
    for(i=0;i<5;i++)
    {
        cout<<endl<<"Enter "<<i<<"  'b': "<<endl;   
        cin>>b[i];
    }

    for(i=0;i<5;i++)
    {
        c[i] = a[i] + b[i];
        cout<<"Sum of two Arrays is: "<<c[i]<<endl;
    }

    


    return 0;
}