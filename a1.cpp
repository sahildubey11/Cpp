#include <iostream>
#include <vector>

using namespace std;

void vectorr(){
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);

    // vector <pair < int, int >> vec;

    // v.emplace_back(5,6);
    
    // vector<int> v(5);
    // creates vector (0,0,0,0,0)
    vector<int> v1(5, 20);
    // creates vector (20,20,20,20,20)
    vector<int> v2(v1);
    // creates vector (20,20,20,20,20)

    //iterators in vectors helps to print the elements in the vector array

    vector<int>::iterator it = v1.begin();
    it++;
    cout << *it << endl;
    it++;
    v1.emplace_back(6);
    cout << v1[5]<< endl;
    it = it +2;
    cout << *it <<endl;


    vector<int>:: iterator it1 = v1.end();
    vector<int>:: iterator it1 = v2.rend();
    vector<int>:: iterator it1 = v1.rbegin();
     

    

}

int main() {
    vectorr();
    return 0;
}