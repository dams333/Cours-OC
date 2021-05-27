//  facteurs premier

#include <iostream>

using namespace std;

int main() {
    
    // Récupération du nombre entré par l'utilisatrice (strictement positif)
    int n;
    while (true) {
        cout << "Entrer un nombre: ";
        cin >> n;
        
        if(n > 0) break;
        
        cout << "Le nombre doit être strictement positif !\n";
    }
    
    cout << "Facteurs premiers: ";
    
    
    // Recherche des facteurs premiers de 2 jusqu'à n
    for(int facteur = 2; facteur <= n; facteur++){
        // Test pour savoir si le facteur est premier
        int totalDiviser = 0;
        for(int d = 2; d <= facteur; d++){
            // Incrémentation du compteur des diviseurs si d divise facteur
            if(facteur % d == 0) totalDiviser++;
        }
        if(totalDiviser == 1){
            // Le facteur est premier car il n'a qu'un seul diviseur (lui-même), le 1 n'étant pas prise en compte car d est initialisé à 2
            // Ce code s'exécute donc pour tous les nombres premiers <= n
            
            // Divisions successives par le facteur tant que cela est possible et affichage
            while (n%facteur == 0) {
                n = n/facteur;
                cout << facteur;
                
                // Point ou virgule à la suite du nombre selon s'il s'agit ou non du dernier facteur
                if(n != 1){
                    cout << ", ";
                }else{
                    cout << ".\n";
                    
                    // Stoppe l'exécution du programme car le dernier facteur a été trouvé
                    return 0;
                }
                
            }
            
        }
    }
    
    
    return 0;
}
