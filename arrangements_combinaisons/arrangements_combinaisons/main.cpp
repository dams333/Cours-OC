//  arrangements_combinaisons

#include <iostream>

using namespace std;

/* Calcul de la factorielle
 * @param n Entier strictement positif
 * @return Factorielle de n
 */
int factorielle(int n){
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

/* Calcul du nombre d'arrangements
 * @param n Entier strictement positif
 * @param k Entier strictement positif, inférieur ou égal à n
 * @return Nombre d'arrangements de n objets pris par k
 */
int arrangement(int n, int k){
    int result = 1;
    for(int i = n; i > (n-k); i--){
        result *= i;
    }
    return result;
}

/* Calcul du nombre de combinaisons
 * @param n Entier strictement positif
 * @param k Entier strictement positif, inférieur ou égal à n
 * @return Nombre de combinaisons de n objets pris par k
 */
int combinaison(int n, int k){
    return arrangement(n, k)/factorielle(k);
}

int main() {
    int n, k;
    
    cout << "Entrer n: ";
    cin >> n;
    cout << "Entrer k: ";
    cin >> k;
    
    cout << arrangement(n, k) << " arrangements, " << combinaison(n, k) << " combinaisons.\n";
    
    
    return 0;
}
