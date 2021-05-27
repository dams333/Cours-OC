//  vigneron

#include <iostream>

using namespace std;

int entrerEntierPositif(string invite){
    while(true){
        cout << invite;
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Veuillez entrer un nombre positif\n";
    }
}

void afficherNiveaux(double cuves[], int nombreCuves){
    cout << "Niveaux des cuves: ";
    double total = 0;
    for(int i = 1; i <= nombreCuves; i++){
        cout << i << ":" << cuves[i] << " ";
        total += cuves[i];
    }
    cout << "total: " << total << "\n";
}

void equilibrer(double cuves[], int cuve1, int cuve2){
    double volume1 = cuves[cuve1];
    double volume2 = cuves[cuve2];
    
    double volumeADistribuer = (volume1 + volume2)/2;
    
    cuves[cuve1] = volumeADistribuer;
    cuves[cuve2] = volumeADistribuer;
}

int main() {
    
    int nombreCuves = entrerEntierPositif("Entrer le nombre de cuves: ");
    
    double cuves[nombreCuves + 1];
    for(int i = 1; i <= nombreCuves; i++){
        double niveau;
        while(true){
            cout << "Entrer le niveau de la cuve " << i << ": ";
            cin >> niveau;
            
            if(niveau >= 0) break;
            
            cout << "Le nombre doit être positif\n";
        }
        cuves[i] = niveau;
    }
    
    afficherNiveaux(cuves, nombreCuves);
    
    while(true){
        int cuve1, cuve2;
        
        while(true){
            cout << "Entrer les numéros de cuves à équilibrer: ";
            cin >> cuve1 >> cuve2;
            
            if(cuve1 > 0 && cuve1 <= nombreCuves && cuve2 > 0 && cuve2 <= nombreCuves) break;
            
            cout << "Veuillez entrer des numéros de cuve valides\n";
        }
        
        if(cuve1 == cuve2) break;
        
        equilibrer(cuves, cuve1, cuve2);
        afficherNiveaux(cuves, nombreCuves);
    }
    
    cout << "Terminé !\n";
    
    return 0;
}
