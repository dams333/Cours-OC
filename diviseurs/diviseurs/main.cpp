//  diviseurs

#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    while(true){
        cout << "Entrez un nombre strictement positif: ";
        cin >> n;
        
        if(n > 0) break;
        
        cout << "Le nombre doit être strictement positif\n";
    }
    
    cout << "Les diviseurs de " << n << " sont ";
    
    for(int diviser = 1; diviser <= n; diviser++){
        if(diviser == n){
            cout << diviser << ".\n";
        }else if(n % diviser == 0){
            cout << diviser << ", ";
        }
    }
    
    return 0;
}
