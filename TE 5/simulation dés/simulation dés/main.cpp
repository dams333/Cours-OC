//  simulation dés

#include <iostream>

using namespace std;

int lancerUnDe(){
    return random()%6 + 1;
}

int entrerEntierPositif(string invite){
    while(true){
        cout << invite;
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Veuillez entrer un nombre positif\n";
    }
}

int main() {
    
    srandomdev();
    
    int nombreDeSuiteAObtenir = entrerEntierPositif("Entrer le nombre de séries de 5 à obtenir pour faire la moyenne: ");
    int suiteObtenues = 0;
    int totalGlobal = 0;
    
    while (suiteObtenues < nombreDeSuiteAObtenir) {
        int dernierLance = 0;
        int serie = 0;
        int totalLocal = 0;
        
        while(serie < 5){
            totalLocal ++;
            totalGlobal++;
            int resultat = lancerUnDe();
            if(resultat == dernierLance){
                serie++;
            }else{
                dernierLance = resultat;
                serie = 1;
            }
            cout << "Tirage " << totalLocal << " (Global: " << totalGlobal << ")" << ": " << resultat << " (Série: " << serie << ")\n";
        }
        
        suiteObtenues++;
        cout << "Il aura fallu " << totalLocal << " lancés de dé pour obtenir 5 fois consécutives le même nombre\n";
    }
    
    cout << "Au total, " << totalGlobal << " lancés ont été éffectués. "
         << "Il faut donc, en moyenne, " << double(totalGlobal)/suiteObtenues << " lancés pour obtenir un nombre 5 fois consécutives\n";

    
    return 0;
}
