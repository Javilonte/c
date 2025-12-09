#include <iostream>
using namespace std;

int main(){

        int s; cin >> s;
        int t; cin >> t;

        int scores[s];
        for(int i = 0; i < s; i++){
            cin >> scores[i];
        }

            int counter =0;
            for(int i=0;i <s;i++){
                if(scores[i]> 0 && scores[i] >= scores[t-1]){
                    counter++;
                }
            }
        cout << counter;
}
