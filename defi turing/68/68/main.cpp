//  68

#include <iostream>

using namespace std;

bool allDifferent(int tableau[6]){
    for(int i = 0; i < 6; i++){
        for(int n = (i + 1); n < 6; n++){
            if(tableau[i] == tableau[n]) return false;
        }
    }
    return true;
}

int main() {
    
    for(int s = 0; s <= 9; s++){
        for(int i = 0; i <= 9; i++){
            for(int x = 0; x <= 9; x++){
                for(int t = 0; t <= 9; t++){
                    for(int r = 0; r <= 9; r++){
                        for(int o = 0; o <= 9; o++){
                            int tableau[6];
                            tableau[0] = s;
                            tableau[1] = i;
                            tableau[2] = x;
                            tableau[3] = t;
                            tableau[4] = r;
                            tableau[5] = o;
                            if(allDifferent(tableau)){
                                cout << s << i << x << "^2 = " << t << r << o << i << s << "\n";
                                int six = s * 100 + i * 10 + x;
                                int trois = t * 10000 + r * 1000 + o * 100 + i * 10 + s;
                                if(six*six == trois){
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
    
    return 0;
}
