#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int c; 
    cin >> c;

    
    int steps = c / 5;

    if(c% 5>0){
        steps++;
    }

    cout << steps << endl;
    return 0;

}
    
