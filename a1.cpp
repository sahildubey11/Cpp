#include<bits/stdc++.h>
using namespace std;
void print1(int a){
    
    for (int i=1; i<=a;i++){
        for(int j=1; j<=a;j++){
            cout <<"*";
        }
        cout<< endl;
    }
}
int main()
{
    int a;
    cin>> a;
    print1(a);
    
    
    return 0;
} 