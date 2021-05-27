//
//  main.cpp
//  07
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
    
    int count = 1;
    
    int n = 2;
    
    while (count <= 23456) {
        
        cout << n;
        
        if(isPrime(n)){
            cout << " (premier: " << count << "ème)";
            count++;
        }
        
        cout << "\n";
        
        n = n + 1;
    }
    
    
    return 0;
}
