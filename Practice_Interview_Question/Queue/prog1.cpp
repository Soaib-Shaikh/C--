#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();

    cout << "Front element: " << q.front() << endl;
    cout << "Size of queue: " << q.size() << endl;                    
    cout<<"Queue elements: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    cout << endl;

    return 0;
}