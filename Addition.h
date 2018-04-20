//
// Created by isen on 20/04/18.
//

#ifndef ADDITION_H
#define ADDITION_H

#include "Expression.h"

class Addition {
    
public:
    Addition(Expression e1, Expression e2);
    Addition(const Addition& orig);
    void Addition::Afficher();
    void Addition::Afficher_npi();
    float Addition::Calculer();
    ~Addition();
    
private:
    Expression _operandeGauche;
    Expression _operandeDroite;

};

#endif /* ADDITION_H */