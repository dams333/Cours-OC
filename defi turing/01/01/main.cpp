//
//  main.cpp
//  01
//
//  Created by Damien Alexandre HUBLEUR on 04.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int somme = 0;
    
    for(int i = 1; i < 2013; i++){
        if(i % 5 == 0 || i % 7 == 0){
            somme += i;
        }
    }
   
    cout << somme << "\n";
    
    return 0;
}
