#include <iostream>
#include "header.h"
#include <math.h>

using namespace std;
int main() {
    Personnage fabien;
    fabien.force = 15.54684;
    fabien.pv = 18;
    fabien.cheveux.epaisseur = "fin" ;
    fabien.cheveux.couleur = "chatain";
    fabien.cheveux.nombre = 500000000000;
    fabien.weapons.dégats = 100;
    fabien.weapons.durabilité = DURABILITE_DES_ARMES;
;
    string a = Transformateur(fabien);
    cout << a ;
    return 0;
}

void CallPerso (Personnage bobby ) {
    cout << bobby.force << " " << bobby.pv<< " "<< bobby.cheveux.nombre;
}

string Transformateur(Personnage robert){
    string a = "pv:" + to_string(robert.pv) + " couleur des cheveux: " + robert.cheveux.couleur;
    return a;
}