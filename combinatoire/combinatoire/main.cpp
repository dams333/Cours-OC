//  combinatoire

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
 * @return Nombre d'arrangements de k objets parmis n
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
 * @return Nombre de combinaisons de k objets parmis n
 */
int combinaison(int n, int k){
    return arrangement(n, k)/factorielle(k);
}

/* Calcul d'un nombre de Catalan
 * @param n Entier strictement positif
 * @return n ième nombre de Catalan
 */
int catalan(int n){
    return combinaison(2*n, n) - combinaison(2*n, n+1);
}

/* Affichage du triangle de Pascale
 * @param n_max Nombre de lignes à afficher
 */
void pascal(int n_max){
    for(int n = 0; n < n_max; n++){
        for(int k = 0; k <= n; k++){
            cout << combinaison(n, k) << " ";
        }
        cout << "\n";
    }
}

/* Demande à l'utilisatrice un nombre
 * @param invite Invite à afficher au terminal
 * @return Nombre entier strictement positif
 */
int demanderNombreStrictementPositif(string invite){
    while(true){
        cout << invite;
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Le nombre doit être positif\n";
    }
}

/* Exécution du programme A (arrangements et combinaisons)
 */
void programA(){
    int n = demanderNombreStrictementPositif("Entrer n: ");
    int k = demanderNombreStrictementPositif("Entrer k: ");
    
    cout << arrangement(n, k) << " arrangements et " << combinaison(n, k) << " combinaisons.\n";
}

/* Exécution du programme C (nombres de Catalan)
 */
void programC(){
    int n = demanderNombreStrictementPositif("Entrer n: ");
    cout << "Le " << n << "e nombre de Catalan est " << catalan(n) << "\n";
}

/* Exécution du programme P (triangle de Pascal)
 */
void programP(){
    int n_max = demanderNombreStrictementPositif("Entrer n: ");
    pascal(n_max);
}

int main() {
    
    bool running = true;

    while (running) {
        cout << "Choix du programme: A)rrangements C)atalan P)ascal F)in: ";
        string program;
        cin >> program;
        
        if(program == "a" || program == "A"){
            programA();
        } else if(program == "c" || program == "C"){
            programC();
        } else if(program == "p" || program == "P"){
            programP();
        } else if(program == "f" || program == "F"){
            running = false;
        } else {
            cout << "Nom de programme inconnu\n";
        }
    }
    
    cout << "Au revoir !\n";
    return 0;
}
