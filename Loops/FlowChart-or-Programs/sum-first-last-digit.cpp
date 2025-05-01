#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,lastdigit,firstdigit;

    cout<<"Enter value: ";
    cin>>num;

     lastdigit = num % 10;

    while(num>=10)
    {   
        
        num = num / 10;
        firstdigit = num;
    }

        sum = firstdigit + lastdigit;

    cout<<"Sum of firstdigit and lastdigit: "<<sum;

    return 0;
}