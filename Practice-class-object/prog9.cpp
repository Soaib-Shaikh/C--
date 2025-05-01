#include<iostream>
using namespace std;

// Friend Function

class Box {
    private:
      int length;  

    public:

        Box() : length(10)  {} 

        friend void display(Box);
};

    void display(Box b){
        cout<<"Length: "<<b.length<<endl;
    }      

int main() {
    Box b;
    display(b);
    
    return 0;
}
