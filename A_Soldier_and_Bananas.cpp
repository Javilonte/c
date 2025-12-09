#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int k;
    cin >> k;

    int n;
    cin >> n;

    int w;
    cin >> w;

    for(int i = 0; i < w; i++){
        
        k = i *2;

        if(n < k){
            return k-n;
        }else{
            return 0;
        }
        
    }
    cout << n << endl;

    return 0;
}
    
