// triple dice

#include <iostream>

using namespace std;

/* Effectue un lancé de dé
 * @return Un entier compris entre 1 et 6 (inclus)
 */
int rollADice(){
    return (random()%6) + 1;
}

int main() {
    
    // Initialisation des variables
    int dice1 = 0, dice2 = 0, dice3 = 0;
    int numberOfTriple = 0, triple = 0;
    int totalCount = 0;
    
    // Récupère le nombre de triples à obtenir
    cout << "Combien de lancés triples doivent être obtenus ? ";
    cin >> numberOfTriple;
    
    // Boucle principale
    while(triple < numberOfTriple){
        totalCount++;
        
        dice1 = rollADice();
        dice2 = rollADice();
        dice3 = rollADice();
        
        cout << "Lancé: " << dice1 << " " << dice2 << " " << dice3 << "\n";
        
        if(dice1 == dice2 == dice3) triple++;
    }
    
    // Affichage du résultat
    cout << "Au total, " << totalCount << " lancés ont été éffectués pour obtenir " << triple << " lancés triples \n";
    cout << "La nombre de lancés moyen pour obtenir un triple est: " << double(totalCount)/triple << "\n";
    
    return 0;
}
