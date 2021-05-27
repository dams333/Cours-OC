//  machine a sous

#include <iostream>

using namespace std;

int tirage(){
    return random()%9 + 1;
}

int main() {
    
    //srandomdev();
    
    int fortune = 100;
    
    int fortuneMin = fortune;
    int fortuneMax = fortune;
    
    int tirageIndex = 0;
    
    while(fortune > 0 && fortune < 1000){
        tirageIndex++;
        fortune--; //payement de 1 franc
        
        int tirage1 = tirage();
        int tirage2 = tirage();
        int tirage3 = tirage();
        
        int gain = 0;
        if(tirage1 == tirage2 && tirage2 == tirage3){
            //3 chiffres identiques
            gain = 35;
        }else if(tirage1 == tirage2){
            //2 chiffres identiques
            gain = 2;
        }else if(tirage1 == tirage3){
            //2 chiffres identiques
            gain = 2;
        }else if(tirage2 == tirage3){
            //2 chiffres identiques
            gain = 2;
        }
        
        fortune += gain; //ajout du gain a la fortune
        
        //mise a jour de la sauvegarde du max et min
        if(fortune > fortuneMax) fortuneMax = fortune;
        if(fortune < fortuneMin) fortuneMin = fortune;
        
        cout << tirageIndex << ": La machine a tiré " << tirage1 << " " << tirage2 << " " << tirage3
             << ", le gain est " << gain
             << ", la fortune est " << fortune << "\n";

    }
    
    cout << "Fortune min: " << fortuneMin << ",  Fortune max: " << fortuneMax << "\n";
    
    return 0;
}
