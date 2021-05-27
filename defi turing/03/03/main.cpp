//
//  main.cpp
//  03
//
//  Created by Damien Alexandre HUBLEUR on 09.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPremier(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0 && i != n){
            return false;
        }
    }
    return true;
}

int main() {
    
    int n = 20130101;
    
    int bigger = 0;
    
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            if(isPremier(i)){
                cout << "Facteur: " << i << "\n";
                bigger = i;
            }
        }
    }
    
    cout << bigger << "\n";
    
    return 0;
}
