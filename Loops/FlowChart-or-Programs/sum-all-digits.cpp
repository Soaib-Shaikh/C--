#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,lastValue;

    cout<<"Enter value of num:";
    cin>>num;

    while(num>0)
    {
        lastValue = num % 10;
        sum = sum + lastValue;
        num = num / 10;
    }

    cout<<"sum is: "<<sum;

    return 0;
}