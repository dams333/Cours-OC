//  Distance droite point

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a, b, c, x, y;
    
    cout << "Entrer les coefficients de la droite: ax + by + c = 0 \n";
    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    cout << "Entrer les coordonnées du point P \n";
    
    cout << "p1: ";
    cin >> x;
    cout << "p2: ";
    cin >> y;
    
    double distance = abs(a*x + b*y + c) / sqrt(a*a + b*b);
    
    cout
        << "La distance du point P ("
        << x
        << ", "
        << y
        << ") et de la droite d'équation "
        << a
        << "x + "
        << b
        << "y + "
        << c
        << " = 0 est "
        << distance
        << "\n";
    
    return 0;
}
