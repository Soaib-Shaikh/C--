#include<iostream>
using namespace std;

//step 1: Start
//step 2: Initialize variables 
//step 3: Check condition
//step 4: If the condition is true, then go to step 5 otherwise go to step 7
//step 5: fact = fact * i
//step 6: Go to step 3
//step 7: Print value of fact
//step 8: End


int main() 
{
    int i, n, fact=1;
    cout<<"Enter n: ";
    cin>>n;

    for(i=n; i>=1; i--)
    {
        fact *= i;
    }

    cout<<"Fact is: "<<fact;

    return 0;
}