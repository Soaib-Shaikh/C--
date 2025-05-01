#include<iostream>
#include<vector>
using namespace std;

class MyClass{
    private:
        vector <int> s1;
    
    public:
        void addElement(){
            int element;
            int numelement;
            cout<<"Enter Number of Elements: ";
            cin>>numelement;
            for(int i = 0; i< numelement; i++){
                cout<<"Enter Element: ";
                cin>>element;
                s1.push_back(element);
            }
        }

        void removeElement(int index){
            s1.erase(s1.begin()+index);
        }

        void updateElement(int index, int element){
            if(index >=0 && index < s1.size()){
                s1[index] = element;
            }
            else{
                cout<<"Invalid Index!"<<endl;
            }
        }

        void viewElement(){
            
            for (int i = 0; i < s1.size(); i++)
            {
                cout<<"Vector is: "<<s1[i]<<endl;
            }
            
        }
};

int main(){
    int choice,element,index;
    MyClass obj;

    do
    {
        cout<<endl<<endl;
        cout<<"Enter 1 to Add element"<<endl;
        cout<<"Enter 2 to Remove element"<<endl;
        cout<<"Enter 3 to Update element"<<endl;
        cout<<"Enter 4 to View element"<<endl;
        cout<<"Enter 0 to Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
        case 1:
            obj.addElement();
            break;

        case 2:
            cout<<"Enter index to remove Element: ";
            cin>>index;
            obj.removeElement(index);
            break;

        case 3:
            cout<<"Enter index to update element: ";
            cin>>index;
            cout<<"Enter New Element: ";
            cin>>element;
            obj.updateElement(index,element);
            break;

        case 4:
            obj.viewElement();
            break;
        
        default:
            cout<<"Invalid Choice!"<<endl;
            break;
        }
        
    } while (choice != 0);
    
    return 0;
}