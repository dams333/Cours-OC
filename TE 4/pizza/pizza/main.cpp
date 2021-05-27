//  pizza

#include <iostream>

using namespace std;

int nombreMorceaux(int nombreCoupes){
    return (nombreCoupes * (nombreCoupes + 1))/2 + 1;
}

int main() {
    
    int nombreCoupes = 1;
    while(true){
        int morceaux = nombreMorceaux(nombreCoupes);
        cout << nombreCoupes << " coupes donnent " << morceaux << " morceaux\n";
        
        if(morceaux >= 666){
            cout << "Il faut au moins " << nombreCoupes << " coupes pour obtenir 666 morceaux.\n";
            break;
        }
        
        nombreCoupes++;
    }
    
    return 0;
}
