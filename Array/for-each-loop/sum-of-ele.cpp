#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int sum=0;

    for(int val : arr)
    {    
        sum += val;
    }
    cout<<"Sum of arr is: "<<sum<<endl;

    return 0;
}