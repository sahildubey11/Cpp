#include <iostream>
#include<stack>
#include<queue>


using namespace std;

void stack1() {
    // LIFO
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    cout<<s.empty()<<endl;

}
void que(){
    //FIFO
    queue<int> q;
    q.push(1);
    q.push(20);
    q.push(23);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    cout<<q.empty()<<endl;

}

int main() {
    stack1();
    cout<<"que \n";
    que();
    cout<< "\nend of the code "<< endl;

    return 0;
}