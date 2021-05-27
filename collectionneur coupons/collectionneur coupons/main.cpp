//  collectionneur coupons

#include <iostream>

using namespace std;

int entrerNombrePositif(string invite){
    while(true){
        cout << invite;
        int n;
        cin >> n;
        
        if(n > 0) return n;
        
        cout << "Veuillez entrer un nombre positif\n";
    }
}

bool tousLesCouponsTrouves(bool tableau[], int nombreCoupons){
    for(int i = 0; i < nombreCoupons; i++){
        if(!tableau[i]) return false;
    }
    return true;
}

int tirerCoupon(int nombreCoupons){
    return random()%nombreCoupons + 1;
}

void couponTrouve(bool tableau[], int numeroCoupon){
    int index = numeroCoupon - 1;
    tableau[index] = true;
}

int main() {
    
    sranddev();

    int const nombreExperience = entrerNombrePositif("Entrer le nombre d'expérience à éffectuer: ");
    int const nombreCoupons = entrerNombrePositif("Entrer le nombre de coupons de la collection: ");
    
    int nombreTirageGlobal = 0;
    
    for(int k = 0; k < nombreExperience; k++){
        bool tableau[nombreCoupons];
        
        for(int i = 0; i < nombreCoupons; i++){
            tableau[i] = false;
        }
        
        int nombreTirageLocal = 0;
        
        while(!tousLesCouponsTrouves(tableau, nombreCoupons)){
            nombreTirageLocal++;
            nombreTirageGlobal++;
            int coupon = tirerCoupon(nombreCoupons);
            cout << "Le coupon " << coupon << " a été tiré\n";
            couponTrouve(tableau, coupon);
        }
        
        cout << "Il aura fallu " << nombreTirageLocal << " tirages pour obtenir les " << nombreCoupons << " coupons\n";
    }
    
    cout << "Il aura fallu, en moyenne, " << double(nombreTirageGlobal)/nombreExperience << " tirages pour obtenir les " << nombreCoupons << " coupons\n";
    
    return 0;
}
