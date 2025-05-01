#include<iostream>
using namespace std;

// Sum All Elements

int main()
{
    int arr[5],sum=0;

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"Sum: "<<sum<<endl;

    return 0;
    
}