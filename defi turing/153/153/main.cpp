//  153

#include <iostream>

using namespace std;

bool allDifferent(int tableau[8]){
    for(int i = 0; i < 8; i++){
        for(int n = (i + 1); n < 8; n++){
            if(tableau[i] == tableau[n]) return false;
        }
    }
    return true;
}

int main() {
    
    for(int d = 0; d <= 9; d++){
        for(int i = 0; i <= 9; i++){
            for(int x = 0; x <= 9; x++){
                for(int u = 0; u <= 9; u++){
                    for(int n = 0; n <= 9; n++){
                        for(int c = 0; c <= 9; c++){
                            for(int e = 0; e <= 9; e++){
                                for(int t = 0; t <= 9; t++){
                                    int tableau[8];
                                    tableau[0] = d;
                                    tableau[1] = i;
                                    tableau[2] = x;
                                    tableau[3] = u;
                                    tableau[4] = n;
                                    tableau[5] = c;
                                    tableau[6] = e;
                                    tableau[7] = t;
                                    if(allDifferent(tableau)){
                                        int dix = d * 100 + i * 10 + x;
                                        int un = u * 10 + n;
                                        int centun = c * 100000 + e * 10000 + n * 1000 + t * 100 + u * 10 + n;
                                        cout << dix << "^2 + " << un << "^2 = " << centun << "\n";
                                        if(dix*dix + un*un == centun){
                                            cout << "OK !\n";
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}

