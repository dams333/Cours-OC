//
//  main.cpp
//  02
//
//  Created by Damien Alexandre HUBLEUR on 04.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int first = 1;
    int second = 1;
    
    int somme = 2;
    
    cout << first << "\n";
    cout << second << "\n";

    do{
        int total = first + second;
        cout << total << "\n";
        second = first;
        first = total;
        
        if(total < 4000000 && total % 2 != 0){
            somme += total;
        }
    }while(first < 4000000);
    
    cout << "Somme: " << somme << "\n";
        
    return 0;
}
