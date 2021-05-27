//  fonction mystere

#include <iostream>
#include <cmath>

using namespace std;

double aléatoire_0_1 () {
    // Retourne un nombre aléatoire dans l'intervalle [0, 1[.
    const double diviseur = pow(2, 31);
    return random()/diviseur;
}

int aleatoire () {
    // Retourne un nombre aléatoire entier compris entre 0 et 23.
    int r;
    do {
        r = 10 + 7*sqrt(-2.0*log(aléatoire_0_1()))*cos(2.0*M_PI*aléatoire_0_1());
    } while (r < 0 or r > 23);
    return r;
}

void ajouter1ALaCase(int tableau[], int n){
    tableau[n] = tableau[n] + 1;
}

int plusGrand(int tableau[], int taille){
    int plusGrand = 0;
    for(int i = 0; i < taille; i++){
        if(tableau[i] > plusGrand) plusGrand = tableau[i];
    }
    return plusGrand;
}

int main() {
    
    const int borneInferieure = 0;
    const int borneSuperieure = 23;
    const int taille = borneSuperieure - borneInferieure + 1;
    
    
    cout << "Entrer le nombre d'échantillons à faire: ";
    int action;
    cin >> action;
    
    int resultat[taille];
    for(int i = 0; i < taille; i++){
        resultat[i] = 0;
    }
    
    for(int i = 0; i < action; i++){
        int nombre = aleatoire();
        nombre -= borneInferieure;
        ajouter1ALaCase(resultat, nombre);
    }
    
    int max = plusGrand(resultat, taille);
    
    for(int i = borneInferieure; i <= borneSuperieure; i++){
        int indexDansTableau = i - borneInferieure;
        
        if(i < 10){
            cout << i << "  | ";
        }else{
            cout << i << " | ";
        }
        
        int nombreEtoiles = (resultat[indexDansTableau]/double(max)) * 60;
        for(int e = 0; e < nombreEtoiles; e++){
            cout << "*";
        }
        
        cout << "\n";
    }
    
    return 0;
}
