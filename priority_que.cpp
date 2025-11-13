#include <iostream>
#include<queue>

using namespace std;

void maxheap1() {
    // Your code here
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;


    //size swap empty functions are the same as others ;
}
void minheap1() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

}

int main() {
    maxheap1();
    cout<<"min heap \n";
    minheap1();
    cout<< "\nend of the code "<< endl;

    return 0;
}