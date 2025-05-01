#include<iostream>
using namespace std;

// Step 1: Start
// Step 2: Inisialize variables
// Step 3: Check the condition
// Step 4: If the condition is true, then go to step 5 othervise go to step 7
// Step 5: sum= sum + i
// Step 6: Go to step 3
// Step 7: Print value of sum
// Step 8: End

int main() 
{
    int n, i, sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i;

    }

    cout<<"Sum is: "<<sum;
    
    return 0;
}



