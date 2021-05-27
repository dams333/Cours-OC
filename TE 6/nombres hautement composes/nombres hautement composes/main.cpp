//  nombres hautement composes

#include <iostream>

using namespace std;

int nombreDiviseurs(int n){
    int nombreDiviseurs = 0;
    for(int d = 1; d <= n; d++){
        if(n%d == 0) nombreDiviseurs++;
    }
    return nombreDiviseurs;
}

int main() {
    
    int n = 1;
    
    int nombreDiviseursMax = 0; //pour éviter de re-tester tous les nombres plus petits
    
    cout << "Liste des nombres hautement composés:\n";
    
    while(true){
        int nbDiviseurs = nombreDiviseurs(n); //pour éviter de devoir appeller plusieurs fois la fonction et donc devoir le calculer plusieurs fois
        if(nbDiviseurs > nombreDiviseursMax){
            cout << n << " (" << nbDiviseurs << " diviseurs)\n";
            nombreDiviseursMax = nbDiviseurs;
        }
        n++;
    }
    
    return 0;
}
