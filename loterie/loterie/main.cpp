//  loterie

#include <iostream>

using namespace std;

bool nombreDansTableau(int tableau[], int taille, int nombre){
    for(int i = 0; i < taille; i++){
        if(tableau[i] == nombre) return true;
    }
    return false;
}

void remplirTableauUtilisateur(int tableau[], int taille, int nombreBoules){
    cout << "Entrer vos " << taille << " nombres: ";
    for(int i = 0; i < taille; i++){
        
        while(true){
            int n;
            cin >> n;
            
            if(n > 0 && n <= nombreBoules){
                if(!nombreDansTableau(tableau, taille, n)){
                    tableau[i] = n;
                    break;
                }
                cout << "Vous avez déjà choisi le nombre " << n << " ! Entrer un autre nombre:\n";
            }else{
                cout << "Le nombre " << n << " ne se situe pas entre 1 et " << nombreBoules << " ! Entrer un autre nombre:\n";
            }
        }
        
    }
}

void tirage(int tableau[], int taille, int nombreBoules){
    for(int i = 0; i < taille; i++){
        
        int boule;
        do{
            boule = random()%nombreBoules + 1;
        }while(nombreDansTableau(tableau, taille, boule));
        
        tableau[i] = boule;
    }
}

void afficherTableau(string texte, int tableau[], int taille){
    cout << texte;
    for(int i = 0; i < taille; i++){
        cout << tableau[i] << " ";
    }
    cout << "\n";
}

int nombreCorrespondant(int tableau1[], int tableau2[], int taille){
    int corresponsant = 0;
    for(int i = 0; i < taille; i++){
        for(int j = 0; j < taille; j++){
            if(tableau1[i] == tableau2[j]){
                corresponsant++;
                break;
            }
        }
    }
    return corresponsant;
}

int main() {
    
    srandomdev();
    
    const int nombreDeBoules = 42;
    const int nombreTirage = 6;
    
    int tableauUtilisateur[nombreTirage];
    remplirTableauUtilisateur(tableauUtilisateur, nombreTirage, nombreDeBoules);
    afficherTableau("Vos nombres sont: ", tableauUtilisateur, nombreTirage);

    int tableauTirage[nombreTirage];
    tirage(tableauTirage, nombreTirage, nombreDeBoules);
    afficherTableau("Le tirage est: ", tableauTirage, nombreTirage);
    
    int correspondant = nombreCorrespondant(tableauTirage, tableauUtilisateur, nombreTirage);
    cout << "Votre score est " << correspondant << " !\n";
    
    return 0;
}
