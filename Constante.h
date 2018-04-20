//
// Created by isen on 20/04/18.
//

#ifndef PROJET_CONSTANTE_H
#define PROJET_CONSTANTE_H

#include "Expression.h"

class Constante : public Expression {

protected:
    float _valeur;

public:
    Constante(float valeur = 0);
    Constante(const Constante& c);
    ~Constante();

    void Afficher(ostream &params);
    void Afficher_npi();
    float Calculer();
};

#endif //PROJET_CONSTANTE_H
