//  90

#include <iostream>

using namespace std;

int main() {
    
    bool ampoules[276];
    
    for(int i = 0; i < 276; i++){
        ampoules[i] = false;
    }
    
    for(int enfant = 1; enfant <= 25; enfant++){
        cout << "L'enfant " << enfant << " inverse les ampoules ";
        for(int i = 0; i < 276; i++){
            if((i+1)%enfant == 0){
                cout << (i+1) << " ";
                ampoules[i] = !ampoules[i];
            }
        }
        cout << "\n";
    }
    
    int allume = 0;
    
    for(int i = 0; i < 276; i++){
        if(ampoules[i]){
            allume++;
        }
    }
    
    cout << "Il y a " << allume << " ampoules allumées\n";
    
    return 0;
}
