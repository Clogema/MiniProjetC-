//
// Created by isen on 20/04/18.
//

#ifndef PROJET_SOUSTRACTION_H
#define PROJET_SOUSTRACTION_H

#include "Constante.h"
#include "Operateur.h"

class Soustraction : public Operateur{
    
public:
    Soustraction(Expression *e1, Expression *e2);
    Soustraction(const Soustraction& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Soustraction();
    
private:
    Expression* _operandeGauche;
    Expression* _operandeDroite;

};

#endif //PROJET_SOUSTRACTION_H
