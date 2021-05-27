//  resolveur cryptarithme

#include <iostream>
#include <unordered_map>

using namespace std;

int compterElement(string str, string element){
    int nombre = 0;
    for(int i = 0; i < str.length(); i++){
        if(str.at(i) == element.at(0)){
            nombre++;
        }
    }
    return nombre;
}

void split (string args [], string str, string element){
    int index = 0;
    int premierCharacter = 0;
    
    for(int i = 0; i < str.length(); i++){
        if(str.at(i) == element.at(0)){
            string arg = "";
            for(int k = premierCharacter; k < i; k++){
                arg = arg + str.at(k);
            }
            args[index] = arg;
            premierCharacter = i + 1;
            index++;
        }
    }
    string arg = "";
    for(int k = premierCharacter; k < str.length(); k++){
        arg = arg + str.at(k);
    }
    args[index] = arg;
}

int main() {
    
    const string soustraction = "-";
    const string addition = "+";
    const string multiplication = "*";
    const string division = "/";
    const string puissance = "^";
    const string egal = "=";
    
    string probleme = "TROIS";
    /*cout << "Entrer le cryptarithme: ";
    getline(cin, probleme);*/
    
    // TROIS ^2 * NEUF = DOUZE
    
    int nombreArguments = compterElement(probleme, " ") + 1;
    string args[nombreArguments];
    split(args, probleme, " ");
    
    unordered_map<string, int> valeursLettres;
    
    
    
    for(int i = 0; i < nombreArguments; i++){
        cout << args[i] << "\n";
        if(args[i] == addition){
            //Operateur d'addition
            
            
        }else if(args[i] == soustraction){
            //Operateur de soustraction
            
            
        }else if(args[i] == multiplication){
            //Operateur de multiplication
            
            
        }else if(args[i] == division){
            //Operateur de division
            
            
        }else if(args[i].at(0) == puissance.at(0)){
            //Operateur de puissance (i-1 puissance i)
            
            
        }else if(args[i] == egal){
            //Egalité entre <i et >i
            
            
        }else{
            //Nombre, a parser
            for(int k = 0; k < args[i].length(); k++){
                if()
            }
            
        }
    }
    
    return 0;
}
