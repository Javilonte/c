#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    short counter = 0;
    for(int i = 0; i<n; i++){
        short v1,v2,v3;
        cin >> v1 >> v2 >> v3;

        if((v1 +v2 + v3) >= 2){
            counter++;
        }
    }
    cout << counter << endl;
    
}