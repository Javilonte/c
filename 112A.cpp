#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string n1;
    cin >> n1;
    string n2;
    cin >> n2;

    for(std::size_t i =0; i<n1.size();i++){
        if(n1[i]<92){
            n1[i]+=32;
        }
        if(n2[i]<92){
            n2[i]+=32;
        }
    }
    if(n1<n2){
        cout<< -1 << endl;
    }
    if(n2<n1){
        cout<< 1 << endl;
    }
    if(n1==n2){
        cout<< 0 << endl;
    }
    return 0;
}
