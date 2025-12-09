#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    char prev;
    cin >> prev;
    char curr;

    short counter = 0;

    for(int i=0; i < n - 1; i++){
        cin>>curr;
        if(curr == prev){

            counter++;
            prev=curr;
        }
        else{
            prev=curr;
        }
    }

    cout << counter <<endl;

    return 0;

}
    
