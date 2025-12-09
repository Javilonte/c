#include <iostream>
using namespace std;

int main(){
    
    int n;

    int fn = 0;
    int cn = 0;

    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; ++j){
            cin >> n;

            if(n == 1){
                fn = i;
                cn = j;
            }
        }
    }
    int mfn = abs(fn - 3); 
    int mcn = abs(cn - 3);

    int tm= mfn + mcn;

    cout << tm << endl;

}
    

