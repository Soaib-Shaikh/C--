#include<iostream>
using namespace std;

class List{
    int itemcode;
    string itemname;
    int itemprice;

    public:
        void setlistitem(){
            cout<<"Enter Itemcode: ";
            cin>>this->itemcode;
            cout<<"Enter Itemname: ";
            cin>>this->itemname;
            cout<<"Enter Item Price: ";
            cin>>this->itemprice;
            cout<<endl;
        } 
        
        void getlistitem(){
            cout<<"Item Code: "<<this->itemcode<<endl;
            cout<<"Item Name: "<<this->itemname<<endl;
            cout<<"Item Price: "<<this->itemprice<<endl;
            cout<<endl;

        }

};

int main(){

    List l[10];

    for(int i=0;i<10;i++){
        cout<<"List "<<i<<" Data"<<endl;
        l[i].setlistitem();
    }

    for(int i=0;i<10;i++){
        cout<<"List "<<i<<" Data"<<endl;
        l[i].getlistitem();
    }


    return 0;
}