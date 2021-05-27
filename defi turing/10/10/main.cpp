//
//  main.cpp
//  10
//
//  Created by Damien Alexandre HUBLEUR on 11.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0 && i != n){
            return false;
        }
    }
    return true;
}

int main() {
    
    int somme = 0;
    
    for(int i = 2; i <= 10000000; i++){
        if(isPrime(i)){
            somme += i;
            cout << i << "(somme: " << somme << ")\n";
        }
    }
    
    cout << somme << "\n";
    
    return 0;
}
