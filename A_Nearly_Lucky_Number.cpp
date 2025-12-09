#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string l;
    cin >> l;

    int counter = 0;

    for (int i = 0; i < l.length(); i++){
        if(l[i]=='4' || l[i] == '7'){
            counter++;
        }
    }

    if(counter == 4 || counter == 7 ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    

    return 0;
}
    
