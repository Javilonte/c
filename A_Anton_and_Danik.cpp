#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    string l;
    cin >> l;

    int CA= 0, CD = 0;
    for(int i = 0; i < l.size(); i++){
        if(l[i] == 'A'){
            CA++;
        }else{
            CD++;
        }
    }
    if(CA > CD){
        cout << "Anton" << endl;
    } else if (CD > CA){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" <<endl;
    }
   
    

    return 0;
}
    
