//
//  main.cpp
//  04
//
//  Created by Damien Alexandre HUBLEUR on 09.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isPalyndrome(int n){
    string text = to_string(n);
    
    if(text.length()%2 == 0){
        for(int inf = 0; inf < text.length()/2; inf++){
            int sup = int((text.length() - inf) - 1);
            if(text.at(inf) != text.at(sup)){
                return false;
            }
        }
        return true;
    }else{
        for(int inf = 0; inf < text.length()/2 - 0.5; inf++){
            int sup = int((text.length() - inf) - 1);
            if(text.at(inf) != text.at(sup)){
                return false;
            }
        }
        return true;
    }
}

int main() {
    
    int palyndrome = 0;
    
    for(int n1 = 1000; n1 <= 9999; n1++){
        for(int n2 = 100; n2 <= 999; n2++){
            int produit = n1 * n2;
            if(isPalyndrome(produit)){
                cout << produit << " est un palyndrome (produit de " << n1 << " et " << n2 << ")\n";
                if(produit > palyndrome){
                    palyndrome = produit;
                }
            }
        }
    }

    cout << palyndrome << " est le plus grand palyndrome\n";
    
    return 0;
}
