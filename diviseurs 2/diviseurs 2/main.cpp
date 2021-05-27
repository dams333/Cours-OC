//  diviseurs 2

#include <iostream>

using namespace std;

int main() {
    
    // Récupération de la borne inférieur (strictement positive)
    int borneInf;
    while(true){
        cout << "Entrez la borne inférieure: ";
        cin >> borneInf;
        
        if(borneInf > 0) break;
        
        cout << "Le nombre doit être strictement positif\n";
    }
    
    // Récupération de la borne supérieure (plus grande ou égale à la borne inférieure)
    int borneSup;
    while(true){
        cout << "Entrez la borne supérieure: ";
        cin >> borneSup;
        
        if(borneSup >= borneInf) break;
        
        cout << "Le nombre doit être supérieur ou égal à la borne inférieure (" << borneInf << ")\n";
    }
    
    // Itération des nombres dans l'interval
    for(int n = borneInf; n <= borneSup; n++){
        cout << "Les diviseurs de " << n << " sont ";
        
        // Itération des possibles diviseurs (entre 0 et n)
        for(int diviser = 1; diviser <= n; diviser++){
            if(n % diviser == 0){
                cout << diviser;
                if(diviser < n){
                    cout << ", ";
                }
            }
        }
        
        cout << ".\n";
    }

    
    return 0;
}
