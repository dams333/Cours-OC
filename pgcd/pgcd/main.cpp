//  pgcd

#include <iostream>

using namespace std;

int main() {
    
    // Récupération du nombre a (strictement positif)
    int a;
    while(true){
        cout << "Entrez le nombre a: ";
        cin >> a;
        
        if(a > 0) break;
        
        cout << "Le nombre doit être strictement positif\n";
    }
    
    // Récupération du nombre b (strictement positif)
    int b;
    while(true){
        cout << "Entrez le nombre b: ";
        cin >> b;
        
        if(b > 0) break;
        
        cout << "Le nombre doit être strictement positif\n";
    }
    
    // Stockage des valeurs de départ pour l'affichage final
    int storageA = a;
    int storageB = b;
    cout << "A: " << storageA << " | B: " << storageB << "\n";
    
    // Algorithme d'Euclide
    while (b != 0) {
        int tmp = a%b;
        a = b;
        b = tmp;
        cout << "A: " << a << " | B: " << b << "\n";
    }
    
    //Affichage du résultat
    cout << "Le pgcd de " << storageA << " et " << storageB << " est " << a << "\n";
    
    return 0;
}
