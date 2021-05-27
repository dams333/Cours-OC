//  42

#include <iostream>

using namespace std;

int main() {
    
    for(int u = 0; u <= 9; u++){
        for(int n = 0; n <= 9; n++){
            int un = 10*u + n;
            int result = (un * un) + un;
            
            cout << "Test for: " << un << " * " << un << " + " << un << " = " << result << "\n";
            
            string r = to_string(result);
            
            if(r.size() == 4){
                if(r.at(2) == to_string(u).at(0)){
                    bool alldifferent = true;
                    for(int i = 0; i < (r.size() - 1); i++){
                        for(int j = (i + 1); j < r.size(); j++){
                            if(r.at(i) == r.at(j)){
                                alldifferent = false;
                                break;
                            }
                        }
                    }
                    if(alldifferent){
                        bool already = false;
                        for(int i = 0; i < r.size(); i++){
                            if(i != 2){
                                if(r.at(i) == to_string(u).at(0) || r.at(i) == to_string(n).at(0)){
                                    already = true;
                                }
                            }
                        }
                        if(!already){
                            cout << "Fonctionne\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
