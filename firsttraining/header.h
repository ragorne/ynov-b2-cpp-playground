//
// Created by fabien on 21/02/2018.
//


#ifndef UNTITLED_HEADER_H
#include <string>
#define DURABILITE_DES_ARMES 150

using namespace std;

struct Cheveux {
    char* couleur;
    long long nombre;
    string epaisseur;
};
struct Armes {
    int durabilité;
    int dégats;
};

struct Personnage {
    int pv;
    double force;
    Cheveux cheveux;
    Armes weapons;
};

void CallPerso (Personnage bobby );
string Transformateur(Personnage robert);

#define UNTITLED_HEADER_H

#endif //UNTITLED_HEADER_H
