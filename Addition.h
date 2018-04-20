//
// Created by isen on 20/04/18.
//

#ifndef ADDITION_H
#define ADDITION_H

#include "Constante.h"
#include "Operateur.h"

class Addition : public Operateur {
    
public:
    Addition(Expression* e1, Expression* e2);
    Addition(const Addition& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Addition();
    
private:
    Expression* _operandeGauche;
    Expression* _operandeDroite;

};

#endif /* ADDITION_H */