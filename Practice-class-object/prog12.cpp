#include<iostream>
using namespace std;

//  Copy Constructor

class Sample {
    
    public:
        int num;

    Sample(int n){
        num = n;
    }

    Sample(const Sample &s){
        num =s.num;
    }

    void display(){
        cout<<"Number: "<<num<<endl;
    }
        
};
     

int main() {

    Sample s1(10);
    Sample s2=s1;
    s2.display();
    
    return 0;
}
