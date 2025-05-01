#include<iostream>
using namespace std;

// Step 1: Start 
// Step 2: Input the number num
// Step 3: initialize a variable i with 1
// Step 4: Repeat step 5-8 while i is less than or equal to num
// Step 5: If num is divisible by i (num % i == 0), then go to step 6; otherwise, go to step 8
// Step 6: Print i as a factor of num
// Step 7: Increment i by 1
// Step 8: Go to step 4
// Step 9: End

int main() 
{
   int i,n;
   cout<<"Enter n: ";
   cin>>n;

    cout<<"The factors of " <<n <<" is: ";     

    for(i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            cout<<i <<", ";
        }
    }

    return 0;
}