//  nombre parfaits

#include <iostream>

using namespace std;

int sommeDiviseursStricts(int n){
    int somme = 0;
    for(int d = 1; d < n; d++){
        if(n%d == 0){
            somme += d;
        }
    }
    return somme;
}

bool estParfait(int n){
    return n == sommeDiviseursStricts(n);
}

int main() {
    
    int n = 1;
    
    while (true) {
        if(estParfait(n)){
            cout << n << " est parfait !\n";
        }
        n++;
    }
    
    return 0;
}
