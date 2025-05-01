#include<iostream>
using namespace std;

int main()
{
    int arr[20],i,n,main,ch;

    do
    {
        cout<<"Enter 5 for Exit from main menu. or Press 1 for Countinue: ";
        cin>>main;
        if(main==5)
        {
            break;
        }
        cout<<"Enter count of Element: ";
        cin>>n;

        for(i=0;i<n;i++)
        {
            cout<<"Element arr["<<i<<"]: ";
            cin>>arr[i];
        }

        do
        {
            cout<<endl;
            cout<<"Enter 1 for Read Elements."<<endl;
            cout<<"Enter 2 for Update Element."<<endl;
            cout<<"Enter 3 for Delete Element."<<endl;
            cout<<"Enter 4 Exit from Menu."<<endl;
            cout<<endl;
            
            cout<<"Enter Your Choice: ";
            cin>>ch;
            cout<<endl;

            switch (ch)
            {
            case 1:
                
                for(i=0;i<n;i++)
                {
                    cout<<"Element arr["<<i<<"]: " <<arr[i]<<endl;
                    
                }
                break;

            case 2:
                cout<<"Enter the Element Position to update(0 to "<< n-1 <<"): ";
                cin>>i;
                if(i >= 0 && i < n)
                {
                    cout<<"Enter a new Value: ";
                    cin>>arr[i];
                }
                else
                {
                    cout<<"Invalid Index!"<<endl;
                }
                break;

            case 3: 
                cout<<"Enter the Element position to Delete (0 to "<< n-1 <<"): ";
                cin>>i;
                if(i >= 0 && i < n) {
                    for(int j=i;j<n-1;j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    n--;
                    cout<<"Element Deleted Successfully."<<endl;
                }
                else{
                    cout<<"Invalid Index."<<endl;
                }
                break;

            case 4: 
                cout<<"Existing Menu..."<<endl;
                break;
            
            default:
                cout<<"Invalid Choice! Try Again."<<endl;
            }
        } while (ch != 4);
        

    } while (main != 5);
    
    return 0;
}