//
//  main.cpp
//  12
//
//  Created by Damien Alexandre HUBLEUR on 11.02.21.
//  Copyright © 2021 Damien Alexandre HUBLEUR. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int n = 1;
    
    while(true){
        
        int triangular = 0;
        for(int i = 1; i <= n; i++){
            triangular += i;
        }
        
        int numberOfDiviser = 0;
        for(int d = 1; d <= triangular; d++){
            if(triangular % d == 0){
                numberOfDiviser++;
            }
        }
        
        cout << triangular << " (" << numberOfDiviser << " diviseurs)\n";
        
        if(numberOfDiviser > 1000){
            cout << triangular << "\n";
            break;
        }
        
        n++;
    }
    
    return 0;
}
