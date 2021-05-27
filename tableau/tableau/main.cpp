//  tableau

#include <iostream>
#include <cmath>

using namespace std;

int demanderNombrePositif(string invite){
    while(true){
        cout << invite;
        
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Le nombre doit être positif\n";
    }
}

void saisirTableau(double tableau[], int n){
    for(int i = 0; i < n; i++){
        cout << "Entrer l'élément " << (i + 1) << ": ";
        cin >> tableau[i];
    }
}

void afficherTableau(double tableau[], int n){
    for(int i = 0; i < (n - 1); i++){
        cout << tableau[i] << ", ";
    }
    cout << tableau[n - 1] << "\n";
}

void inverser(double tableau[], int n){
    for(int i = 0; i < (n/2); i++){
        double elementI = tableau[i];
        tableau[i] = tableau[n - i - 1];
        tableau[n - i - 1] = elementI;
    }
}

double moyenne(double tableau[], int n){
    double somme = 0;
    for(int i = 0; i < n; i++){
        somme += tableau[i];
    }
    return somme/n;
}

double ecartType(double tableau[], int n){
    double numerateur = 0;
    for(int i = 0; i < n; i++){
        numerateur += pow(tableau[i] - moyenne(tableau, n), 2);
    }
    return sqrt(numerateur/n);
}

void trierOrdreCroissant(double tableau[], int n){
    while(true){
        bool aPermute = false;
        
        for(int i = 0; i < (n - 1); i++){
            if(tableau[i] > tableau[i + 1]){
                aPermute = true;
                double stock = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = stock;
            }
        }
        
        if(!aPermute) break;
    }
}

void remplirTableau(double tableau[], int n){
    for(int i = 0; i < n; i++){
        int n = random()%10000;
        if(random()%2 == 1){
            tableau[i] = n;
        }else{
            tableau[i] = -n;
        }
    }
}

int main() {
    srandomdev();
    
    int taille = demanderNombrePositif("Entrer la taille du tableau: ");
    double tableau[taille];
    
    cout << "Voulez-vous remplir le tableau vous-même ? (o/n)\n";
    
    string reponse;
    cin >> reponse;
    
    if(reponse == "n" || reponse == "N"){
        remplirTableau(tableau, taille);
    }else{
        cout << "Saisissez les " << taille << " nombres\n";
        saisirTableau(tableau, taille);
    }
    
    cout << "Les " << taille << " nombres inversés sont:\n";
    inverser(tableau, taille);
    afficherTableau(tableau, taille);
    
    cout << "Leur moyenne est " << moyenne(tableau, taille) << ", leur écart type est " << ecartType(tableau, taille) << "\n";
    
    trierOrdreCroissant(tableau, taille);
    cout << "Les " << taille << " nombres dans l'ordre croissant sont:\n";
    afficherTableau(tableau, taille);
    
    
    return 0;
}
