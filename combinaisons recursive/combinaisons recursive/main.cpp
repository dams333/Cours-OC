//  combinaisons recursive

#include <iostream>

using namespace std;

long int compteur;

long int combinaisons(int n, int k){
    compteur++;
    if(k == 0 || n == k){
        return 1;
    }else{
        return combinaisons(n - 1, k - 1) + combinaisons(n - 1, k);
    }
}

int entrerNombrePositif(string invite){
    cout << invite;
    while (true) {
        int n;
        cin >> n;
        
        if(n >= 0) return n;
        
        cout << "Le nombre doit être positif\n";
    }
}

int main() {
    
    compteur = 0;
    
    int n = entrerNombrePositif("Entrer n: ");
    int k = entrerNombrePositif("Entrer k: ");

    cout << "Le nombre de combinaisons de " << n << " par " << k << " est " << combinaisons(n, k) << "\n";
    cout << "Il aura fallu appeler la fonction combinaisons " << compteur << " fois !\n";
    
    return 0;
}
