//  profondeur de champs

#include <iostream>

using namespace std;

int main() {
    
    // Récupération des différents paramètres entrés par l'utilisatrice
    double f, d, N, c;
    cout << "Entrer la distance focale (f): ";
    cin >> f;
    cout << "Entrer la distance de mise au point (d): ";
    cin >> d;
    cout << "Entrer l'ouverture du diaphragme (N): ";
    cin >> N;
    cout << "Entrer le diamètre du cercle de confusion (c): ";
    cin >> c;
    
    // Calcul de l'hyperfocale
    double h = (f * f)/(N * c);
    cout << "L'hyperfocale vaut " << h << "\n";
    
    // Calcul du plan net le plus proche
    double d_P = (h * d)/(h + d);
    
    if(h > d){
        // Calcul du plan net le plus éloigné
        double d_L = (h * d)/(h - d);
        
        // Calcul et affichage du résultat
        double p = d_L - d_P;
        cout << "Le plan net le plus proche est à une distance de " << d_P << ". Le plus éloigné est à une distance de " << d_L << ".\n";
        cout << "La profondeur de champs est donc " << p << "\n";
    }else{
        // Le plan net le plus éloigné est à l'infini (d_L = ∞)
        // Donc p = ∞ - d_P = ∞
        cout << "Le plan net le plus proche est à une distance de " << d_P << ". Le plus éloigné est à une distance infinie\n";
        cout << "La profondeur de champs est donc infinie\n";
    }
    
    return 0;
}
