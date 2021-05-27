//  17

#include <iostream>

using namespace std;

int sommeDiviseurs(int n){
    int somme = 0;
    for(int d = 1; d < n; d++){
        if(n%d == 0){
            somme += d;
        }
    }
    return somme;
}

bool arrayContain(int array[], int n, int index){
    for(int i = 0; i <= index; i++){
        if(array[i] == n) return true;
    }
    return false;
}

int main() {
    
    int found[] = {};
    int index = 0;
    
    int total = 0;
    
    for(int i = 2; i <= 100000; i++){
        if(!arrayContain(found, i, (index - 1))){
            int somme = sommeDiviseurs(i);
            if(somme <= 100000 && somme != i){
                if(sommeDiviseurs(somme) == i){
                    found[index] = somme;
                    index++;
                    cout << i << " et " << somme << " sont des nombres amicaux\n";
                    total += i;
                    total += somme;
                }
            }
        }
    }
    
    cout << total << "\n";
    
    return 0;
}
