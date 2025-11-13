#include <iostream>
#include <list>
#include<stack>

using namespace std;

void list1() {
    // Your code here
    list<int> l;
    l.push_back(20);
    l.push_front(1);
    l.emplace_front(34);
    for(auto i=l.begin(); i!=l.end(); i++){
        cout<<*i<<endl;
    }


}

void dq(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.emplace_front(3);

    for(auto i=d.begin(); i!=d.end(); i++){
        cout<<*i<<endl;
    }
    cout<< d.back();
     cout<<d.front();
    d.pop_back();
    d.pop_front();
    
    cout<< "after poping"<<endl;
    for(auto i=d.begin(); i!=d.end(); i++){
        cout<<*i<<endl;
    }
    
}
int main() {
   list1();
   cout<< "\nend of the list "<< endl;
   dq();

    return 0;

}