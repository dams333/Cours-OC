//  38

#include <iostream>

using namespace std;

string nextConway(string T){
    int index = 0;
    
    int number = 1;
    string nextT = "";
    
    while (index < (T.size() - 1)) {
        if(T.at(index) == T.at(index + 1)){
            number++;
        }else{
            nextT = nextT + to_string(number) + T.at(index);
            number = 1;
        }
        index++;
    }
    
    if(index < T.size()){
        nextT = nextT + to_string(number) + T.at(index);
    }
    
    return nextT;
}

int main() {
    
    string T = "2";
    
    for(int i = 2; i <= 50; i++){
        cout << "Calcul du " << i << "ème nombre\n";
        T = nextConway(T);
    }
    
    int number = 0;
    
    for(int i = 0; i < T.size(); i++){
        string detect = "1";
        if(T.at(i) == detect.at(0)){
            number++;
        }
    }
    
    cout << number << "\n";
    
    return 0;
}
