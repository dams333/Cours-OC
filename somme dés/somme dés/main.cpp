//  somme dés

#include <iostream>

using namespace std;

int main() {
    
    srandomdev();
    
    // Récupération du nombre de dés à chaque lancer (strictement positif)
    int numberOfDice;
    while(true){
        cout << "Nombre de dés: ";
        cin >> numberOfDice;
        
        if(numberOfDice > 0) break;
        
        cout << "Le nombre doit être strictement positif\n";
    }
    
    // Récupération du nombre de lancers (strictement positif)
    int numberOfTry;
    while(true){
        cout << "Nombre de lancers: ";
        cin >> numberOfTry;
        
        if(numberOfTry > 0) break;
        
        cout << "Le nombre doit être strictement positif\n";
    }
    
    // Boucle pour chaque lancer
    int globalTotal = 0;
    for(int i = 1; i <= numberOfTry; i++){
        cout << "Lancer " << i << ": ";
        
        // Boucle pour chaque dé
        int totalOfCurrentTry = 0;
        for(int dice = 1; dice <= numberOfDice; dice++){
            int value = random()%6 + 1;
            cout << value;
            if(dice < numberOfDice) cout << ", ";
            
            // Stockage de la valeur du dé
            totalOfCurrentTry += value;
        }
        // Stockage du lancer
        globalTotal += totalOfCurrentTry;
        cout << ". Somme: " << totalOfCurrentTry << "\n";
    }
    
    // Affichage du résultat
    double moyenne = double(globalTotal)/double(numberOfTry);
    cout << "Somme moyenne: " << moyenne << "\n";
    
    return 0;
}
