#include<iostream>
using namespace std;

// Inline Function in Class

class Math {
    
    public:
        inline int square(int x){
            return x * x;
        }
};
     

int main() {
   Math m;
   cout<<"Square of 5: "<<m.square(5)<<endl;
    
    return 0;
}
