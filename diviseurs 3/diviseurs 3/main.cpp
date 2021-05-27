//  nombres premiers

#include <iostream>

using namespace std;

long int saisirNombrePositif(string invite){
    while(true){
        cout << invite;
        long int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Il faut un nombre strictement positif\n";
    }
}

long int saisirNombrePlusGrand(string invite, long int m){
    while(true){
        cout << invite;
        long int n;
        cin >> n;
        
        if(n > m) return n;
        
        cout << "Il faut un nombre plus grand que " << m << "\n";
    }
}

bool estPremier(long int n){
    if(n == 2) return true;
    if(n%2 == 0) return false;
    for(long int d = 3; d*d <= n; d+=2){
        if(n%d == 0) return false;
    }
    return true;
}

int main() {
    
    long int inf = saisirNombrePositif("Entrer la borne inférieure: ");
    long int sup = saisirNombrePlusGrand("Entrer la borne supérieure: ", inf);
    
    cout << "Les nombres premiers compris entre " << inf << " et " << sup << " sont:\n";
    
    for(long int n = inf; n <= sup; n++){
        if(estPremier(n)){
            cout << n << "\n";
        }
    }
    
    return 0;
}
