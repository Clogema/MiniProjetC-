//
// Created by isen on 20/04/18.
//

#ifndef ADDITION_H
#define ADDITION_H

#include "Constante.h"
#include "Operateur.h"
#include <ostream>

class Addition : public Operateur {
    
public:
    Addition(Expression* e1, Expression* e2);
    Addition(const Addition& orig);
    void Afficher(ostream &params);
    void Afficher_npi(ostream &params);
    float Calculer();
    ~Addition();
    
private:
    Expression* _operandeGauche;
    Expression* _operandeDroite;

};

#endif /* ADDITION_H */