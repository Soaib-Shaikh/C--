#include<iostream>
using namespace std;

int main()
{
    int arr[] = {15,24,33,42,51};
    int sum=0,avg=0;

    for(int val : arr)
    {    
       int size= sizeof arr /sizeof (arr[0]);
        sum += val;
        avg = sum / size;
    }
    cout<<"Sum of arr is: "<<sum<<endl;
    cout<<"avg of arr is: "<<avg<<endl;

    return 0;
}