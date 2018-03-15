#include <iostream>
#include <cstdlib>
#include <ctime>
#include "header.h"

using namespace std;
int main() {

   int a = 0;
   srand(time(NULL));



    while (a<100) {

        int jkp = rand() % 3 + 1;
        int valeurj2;
        int oldjkp;
        (a >= 1) ? valeurj2 = strategie_j2(oldjkp) : valeurj2 = rand() % 3 + 1;
        a += 1;
        fight(jkp, valeurj2);
        oldjkp = jkp;


    }
    if (v1>v2 && v1>tie || v1==tie) {
        cout<<"Joueur 1 a gagne";
    }
    else if (v2>v1 && v2>tie || v2==tie) {
        cout<<"Joueur 2 a gagne";
    }
    else if (tie>v1 && tie>v2){
        cout<<"egalite";
    }
    else if (v1==v2 ){
        cout<<"égalité";
    }
    else{
        cout<< "unexpected result";
    }


}

