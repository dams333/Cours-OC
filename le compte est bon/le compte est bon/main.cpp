//  le compte est bon

#include <iostream>

using namespace std;

int main() {
    
    srandomdev();

    int min, max;
    cout << "Nombre minimal: ";
    cin >> min;
    cout << "Nomber maximal: ";
    cin >> max;
    
    int secretNumber = (random() % (max - min + 1)) + min;
    cout << "Devinez le nombre secret entre " << min << " et " << max << " !\n";
    
    int inputNumber, userTries = 0;
    
    do{
        userTries++;
        
        cout << "Essai " << userTries << ": ";
        cin >> inputNumber;
        
        if(inputNumber > secretNumber){
            cout << "Trop grand !\n";
        }else if(inputNumber < secretNumber){
            cout << "Trop petit !\n";
        }else{
            cout << "Le compte est bon ! Le nombre était bien " << secretNumber << " que vous avez trouvé en " << userTries << " essais\n";
        }
        
    }while(inputNumber != secretNumber);
    
    return 0;
}
