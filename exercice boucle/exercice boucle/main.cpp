//  exercice boucle

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n = -10;
    
    while(n <= 100){
        
        cout << "Le carré de "
             << n
             << " est "
             << pow(n, 2)
             << ", son cube est "
             << pow(n, 3);
        
        if(n < 0){
            cout << ", sa racine carrée n'existe pas\n";
        }else{
            cout << ", sa racine carrée est "
            << sqrt(n)
            << "\n";
        }
        
        n++;
    }
    
    return 0;
}
