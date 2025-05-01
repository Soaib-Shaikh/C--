#include<iostream>
using namespace std;

class Myclass{

    public:
    int x;

    void setA(int a){
        this ->x = a;
    }

    Myclass* getCurrentobj(){
        return this;
    }
   
};

int main(){
    Myclass s1;
    Myclass *s2;
    s1.setA(10);
    
    s2 = s1.getCurrentobj();

    return 0;
}