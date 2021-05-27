//  78

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    for(int a = 0; a <= 9; a++){
        for(int b = 0; b <= 9; b++){
            for(int c = 0; c <= 9; c++){
                for(int d = 0; d <= 9; d++){
                    int abcd = 1000*a + 100*b + 10*c + d;
                    cout << abcd << " = " << a << "^" << b << " * " << c << "^" << d << "\n";
                    if(pow(a, b) <= 9999 && pow(c, d) <= 9999){
                        int result = pow(a, b) * pow(c, d);
                        if(result <= 9999){
                            if(result == abcd){
                                cout << "Fonctionne !\n";
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
