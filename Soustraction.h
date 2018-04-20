//
// Created by isen on 20/04/18.
//

#ifndef PROJET_SOUSTRACTION_H
#define PROJET_SOUSTRACTION_H

#include "Constante.h"
#include "Operateur.h"

class Soustraction : public Operateur{
    
public:
    Soustraction(Constante e1, Constante e2);
    Soustraction(const Soustraction& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Soustraction();
    
private:
    Constante _operandeGauche;
    Constante _operandeDroite;

};

#endif //PROJET_SOUSTRACTION_H
