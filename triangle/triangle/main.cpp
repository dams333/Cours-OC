//  triangle

#include <iostream>
#include <cmath>

using namespace std;

double norme(double v1, double v2){
    return sqrt(v1*v1 + v2*v2);
}

double ditance2points(double a1, double a2, double b1, double b2){
    return norme(a1 - b1, a2 - b2);
}

double produitScalaire(double v1, double v2, double w1, double w2){
    return v1*w1 + v2*w2;
}

double determinant(double v1, double v2, double w1, double w2){
    return v1*w2 - v2*w1;
}

double angle(double v1, double v2, double w1, double w2){
    return acos(produitScalaire(v1, v2, w1, w2) / (norme(v1, v2)*norme(w1, w2)));
}

double aire(double v1, double v2, double w1, double w2){
    return abs(determinant(v1, v2, w1, w2))/2;
}

void barycentre(double a1, double a2, double b1, double b2, double c1, double c2, double& g1, double& g2){
    g1 = (a1 + b1 + c1)/3;
    g2 = (a2 + b2 + c2)/3;
}

double radianVersDegre(double angle){
    return angle * 180/M_PI;
}


int main() {
    
    double a1, a2, b1, b2, c1, c2;
    
    cout << "Entrer les coordonnées du point A: ";
    cin >> a1 >> a2;
    cout << "Entrer les coordonnées du point B: ";
    cin >> b1 >> b2;
    cout << "Entrer les coordonnées du point C: ";
    cin >> c1 >> c2;
    
    double cote_ab = norme(a1 - b1, a2 - b2);
    double cote_bc = norme(b1 - c1, b2 - c2);
    double cote_ca = norme(c1 - a1, c2 - a2);
    
    cout << "Ses côtés sont de longueurs: " << cote_ab << " (AB), " << cote_bc << " (BC) et " << cote_ca << " (CA)\n";
    cout << "Son périmètre est de: " << cote_ab + cote_bc + cote_ca << "\n";
    cout << "Son aire vaut: " << aire((a1 - b1), (a2 - b2), (b1 - c1), (b2 - c2)) << "\n";
    
    double g1, g2;
    barycentre(a1, a2, b1, b2, c1, c2, g1, g2);
    
    cout << "Les coordonnées de son barycentre sont: (" << g1 << "; " << g2 << ")\n";
    
    double angleB = angle((b1 - a1), (b2 - a2), (b1 - c1), (b2 - c2));
    double angleC = angle((c1 - b1), (c2 - b2), (c1 - a1), (c2 - a2));
    double angleA = angle((a1 - c1), (a2 - c2), (a1 - b1), (a2 - b2));
    
    cout << "Ses angles sont de " << radianVersDegre(angleA) << " (A), " << radianVersDegre(angleB) << " (B), " << radianVersDegre(angleC) << " (C)\n";

    return 0;
}
