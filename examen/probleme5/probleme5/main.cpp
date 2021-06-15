// probleme5

#include <iostream>

using namespace std;

int entrerNombreStrictementPositif(string invite){
    cout << invite;
    while(true){
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Le nombre doit être strictement positif. Recommencer: ";
    }
}

int lancerUnDe(){
    return random()%6 + 1;
}

void effectuerTirage(int resultat[], int taille){
    for(int i = 0; i < taille; i++){
        resultat[i] = lancerUnDe();
    }
}

void afficherTirage(int experience, int tirage, int resultat[], int taille){
    cout << "Expérience " << experience << ", tirage " << tirage << ": ";
    for(int i = 0; i <= (taille - 2); i++){
        cout << resultat[i] << ", ";
    }
    cout << resultat[taille - 1] << "\n";
}

bool tousPareil(int resultat[], int taille){
    for(int i = 1; i < taille; i++){
        if(resultat[i - 1] != resultat[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int const nombreDe = 5;
    //srandomdev();
    
    int nombreExperience = entrerNombreStrictementPositif("Entrer le nombre d'expériences à éffectuer: ");
    
    int tirageGlobal = 0;
    for(int experience = 1; experience <= nombreExperience; experience++){
        
        int tirage = 0;
        while(true){
            tirage++;
            tirageGlobal++;
            
            int resultat[nombreDe];
            effectuerTirage(resultat, nombreDe);
            afficherTirage(experience, tirage, resultat, nombreDe);
            if(tousPareil(resultat, nombreDe)){
                cout << "Tous les dés sont pareils ! Expérience " << experience << " terminée en " << tirage << " tirages\n";
                break;
            }
        }
    }
    
    cout << "Il a fallu " << tirageGlobal << " tirages pour réaliser l'expérience " << nombreExperience << " fois.\n";
    cout << "Il faut donc, en moyenne, " << tirageGlobal/double(nombreExperience) << " tirages pour obtenir " << nombreDe << " dés identiques.\n";
    
    return 0;
}
