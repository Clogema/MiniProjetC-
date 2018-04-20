//
// Created by isen on 20/04/18.
//

#ifndef ADDITION_H
#define ADDITION_H

#include "Constante.h"
#include "Operateur.h"

class Addition : public Operateur {
    
public:
    Addition(Constante e1, Constante e2);
    Addition(const Addition& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Addition();
    
private:
    Constante _operandeGauche;
    Constante _operandeDroite;

};

#endif /* ADDITION_H */