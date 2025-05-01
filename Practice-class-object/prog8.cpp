#include<iostream>
using namespace std;

// Class with Static Member Function

class Counter {
    private:
        static int count;

    public:

        static void showcount(){
            cout<<"Count: "<<count<<endl;
        }
        
        
};

    int Counter::count = 5;    

int main() {
    Counter::showcount();

   
    
    return 0;
}
