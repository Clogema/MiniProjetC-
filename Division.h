//
// Created by isen on 20/04/18.
//

#ifndef PROJET_DIVISION_H
#define PROJET_DIVISION_H


#include "Constante.h"
#include "Operateur.h"

class Division : public Operateur {
    
public:
    Division(Constante e1, Constante e2);
    Division(const Division& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Division();
    
private:
    Constante _operandeGauche;
    Constante _operandeDroite;

};

#endif //PROJET_DIVISION_H
