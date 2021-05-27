//  nombre abondants

#include <iostream>

using namespace std;

int saisirNombrePositif(string invite){
    while(true){
        cout << invite;
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Il faut un nombre strictement positif\n";
    }
}

int saisirNombrePlusGrand(string invite, int m){
    while(true){
        cout << invite;
        int n;
        cin >> n;
        
        if(n > m) return n;
        
        cout << "Il faut un nombre plus grand que " << m << "\n";
    }
}

int sommeDiviseursStricts(int n){
    int somme = 0;
    for(int d = 1; d < n; d++){
        if(n%d == 0){
            somme += d;
        }
    }
    return somme;
}

bool estAbondant(int n){
    return n < sommeDiviseursStricts(n);
}

int main() {
    
    int inf = saisirNombrePositif("Entrer la borne inférieure: ");
    int sup = saisirNombrePlusGrand("Entrer la borne supérieure: ", inf);
    
    cout << "Les nombres abondants compris entre " << inf << " et " << sup << " sont:\n";
    
    for(int n = inf; n <= sup; n++){
        if(estAbondant(n)){
            cout << n << "\n";
        }
    }
    
    return 0;
}
