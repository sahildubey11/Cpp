#include <iostream>
#include <vector>

using namespace std;

void solve() {
    // Your code here
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;
        v.push_back(x);

    }

    //Method 1
    
    vector<int>::iterator it = v.begin();
    
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
   
    
    //Method 2
    cout<<"Here is the method II"<<endl;
    
    for (vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout<<*it<<endl;
    }
    
    //Method 3
    cout<<"Here is the method III"<<endl<<endl;
    
    for (auto it =v.begin(); it !=v.end(); it++ ){
        cout<<*it<<endl;
    }

    //{1,2,3,4,5,6}
    v.erase(v.begin(), v.begin()+3); //[start, end)
    //output- {4,5,6}

    
    
    cout << "result after erasing \n";
    for(auto it =v.begin(); it !=v.end(); it++ ){
        cout<<*it<<endl;
    }
    //inserting a element
    v.insert(v.end()-1,100);
    v.insert(v.begin(),2,5);//adds 2 instances of 5
    //copying
    vector<int>b(2,100);
    v.insert(v.begin(), b.begin(), b.end());
    
    cout << "result after inseting \n";
    for(auto it =v.begin(); it !=v.end(); it++ ){
        cout<<*it<<endl;
    }

    v.size();

    v.pop_back();//removes the last element

    v.swap(b);
    //swaps the vectors;

    v.clear();//clears the all element for the vector

    cout<<v.empty()<<endl;// checks if vector is empty or not

}


int main() {
    solve();
    cout<< "end of the code "<< endl;

   
    return 0;
}