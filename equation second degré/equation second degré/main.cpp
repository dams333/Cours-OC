//  equation second degré

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Entrer les coefficients de l'équation du type ax^2 + bx + c = 0\n";
    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    if(a != 0){
        // Equation du type: ax^2 + bx + c = 0
        
        double delta = pow(b, 2) - 4 * a * c;
        cout << "Le discriminant est: " << delta << "\n";
        
        if(delta < 0){
            cout << "Il n'y a pas de solution réelle\n";
        }else if(delta == 0){
            double solution = -b/(2 * a);
            cout << "La solution de l'équation est: " << solution << "\n";
        }else{
            double solution1 = (-b + (sqrt(delta)))/(2 * a);
            double solution2 = (-b - (sqrt(delta)))/(2 * a);
            cout << "Les solutions sont: " << solution1 << " et " << solution2 << "\n";
        }
    }else{
        if(b != 0){
            // Equation du type: bx + c = 0
            
            double solution = -c/b;
            cout << "La solution de l'équation est: " << solution << "\n";
        }else{
            // Equation du type: c = 0
            
            if(c != 0){
                cout << "Il n'y a pas de solution à cette équation\n";
            }else{
                cout << "Qu'importe la valeur de x, l'éqution est toujours vraie\n";
            }
        }
    }
    
    return 0;
}
