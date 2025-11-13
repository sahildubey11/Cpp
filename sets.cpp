#include <iostream>
#include<set>

using namespace std;

void set1() {
    // Your code here
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.emplace(2);
    s.insert(3);
    s.insert(5);

    //begin(),rend(),end(),rbegin(),size(),empty(),swap() works same 
    
    // auto it =s.find(3);
    auto it = s.find(6);

    s.erase(4);
    int cnt =s.count(1);
    cout<<cnt<<endl;

    //lower_bound and upper_bound work same as in the vectors;
    auto t= s.upper_bound(1);
    auto t1= s.lower_bound(5);


}


void multisett(){

    multiset<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.emplace(2);
    s.insert(3);
    s.insert(3);
    s.insert(5);

    for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<endl;
    }
    cout<<"end"<<endl;
    // s.erase(4);//remove all occourance of 4
    int cnt =s.count(4);
    cout<<cnt<<endl;
    // s.erase(s.find(3));//remove only one occourance of 3
    s.erase(s.find(3),next(s.find(3), 2));

    cout<<"printing after deletring"<<endl;
     for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<endl;
    }

    auto t= s.upper_bound(1);
    auto t1= s.lower_bound(5);
}

int main() {
//    set1();
   multisett();
   cout<<"end of the code"<<endl;
    return 0;
}