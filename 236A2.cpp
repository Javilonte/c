#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string n;
    cin >> n;


    for(std::size_t i = 0; i < n.size(); i++){
        if(std::stoi(n) % 2 == 0){
            cout << "CHAT WITH HER!" << endl;
        }
        else{
            cout << "IGNORE HIM!" << endl;
        }
    }

}
    

