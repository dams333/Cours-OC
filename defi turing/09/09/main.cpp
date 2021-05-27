//
//  main.cpp
//  09
//
//  Created by Damien Alexandre HUBLEUR on 11.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int bigger = 0;
    
    for(int a = 0; a <= 3600; a++){
        for(int b = 0; b <= 3600; b++){
            if(a + b <= 3600){
                int c = 3600 - a - b;
                cout << a << " " << b << " " << c;
                if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
                    cout << " (triplet)";
                    if(a*b*c > bigger){
                        bigger = a*b*c;
                    }
                }
                cout << "\n";
            }
        }
    }
    
    cout << bigger << "\n";
    
    return 0;
}
