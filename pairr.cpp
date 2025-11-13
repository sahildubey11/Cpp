#include <iostream>


using namespace std;

void pairs() {
    // Your code here
    pair<float ,int > p={1.2,4};
    cout<<p.first <<" " <<p.second;
    
    pair<int, pair<int , int> > p1={1,{2,3}};
    cout<<p1.first <<" " <<p1.second.first <<" " <<p1.second.second<<endl;

    //PAIRS IN ARRAYS
    pair<int,int> arr[]={{1,3},{1,4},{1,5}};
    cout<< arr[1].second;

}

int main() {
   pairs();
    cout<< "\nend of the code "<< endl;

    return 0;
}