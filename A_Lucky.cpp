#include <iostream>
#include <string>

using namespace std;

int main(){
    

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s; 

        int firstHalf, secondHalf;

        firstHalf  = s[0] + s[1] + s[2];
        secondHalf = s[3]+ s[4] + s[5];
        
        if (firstHalf == secondHalf) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
}}
return 0;
}
