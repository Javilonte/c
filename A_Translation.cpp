#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string b, t;
    cin >> b >> t;

    if(b.size() != t.size()){
        cout << "NO" << endl;
        return 0;
    }

    int j = t.size() -1;
    for(int i= 0; i<b.size(); i++){
        if(b[i] != t[j]){
            cout << "NO" << endl;
            return 0;
        }
        j--;
    }

    cout << "YES" << endl;
    
    return 0;
}