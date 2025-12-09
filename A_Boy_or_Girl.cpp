#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string n;
    cin >> n;

    bool seen[26] = {false};
    for(char c : n){
        int index = c - 'a';
        seen[index] = true;
    }
    int distinct_counter = 0;
    for(int i = 0; i<26; i++){
        if(seen[i]){
            distinct_counter++;
        }
    }

    if(distinct_counter % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

}
    
