//
// Created by fabien on 15/03/2018.
//

#ifndef UNTITLED2_HEADER_H
#define UNTITLED2_HEADER_H

int v1 = 0;
int v2 = 0;
int tie = 0;

int strategie_j2 (int movej1){
    int movej2;
    switch (movej1){
        case 1:
            movej2 = 2;
            break;
        case 2:
            movej2 = 3;
            break;
        case 3:
            movej2 = 1;
            break;

        default:
            movej2 = 1;

    }
    return movej2;
}

void fight (int valeurj1, int valeurj2){
    if (valeurj1 == 1)
    {
        if (valeurj2 == 1)
        {
            tie+=1;
        }
        else if (valeurj2 == 2){
            v1+=1;
        }
        else if (valeurj2 == 3){
            v2+=1;
        }
    }
    if (valeurj1 == 2)
    {
        if (valeurj2 == 1)
        {
            v2+=1;
        }
        else if (valeurj2 == 2){
            tie+=1;
        }
        else if (valeurj2 == 3){
            v1+=1;
        }
    }
    if (valeurj1 == 3)
    {
        if (valeurj2 == 1)
        {
            v1+=1;
        }
        else if (valeurj2 == 2){
            v2+=1;
        }
        else if (valeurj2 == 3){
            tie+=1;
        }
    }
}

#endif //UNTITLED2_HEADER_H
