#include<iostream>
using namespace std;

//  Access Static Members

class My{
    public:
        static int num;
};

int My::num=102;


int main(){
    cout<<"My num is: "<<My::num;

    return 0;
}