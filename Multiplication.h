//
// Created by isen on 20/04/18.
//

#ifndef PROJET_MULTIPLICATION_H
#define PROJET_MULTIPLICATION_H

#include "Constante.h"
#include "Operateur.h"

class Multiplication : public Operateur{
    
public:
    Multiplication(Expression *e1, Expression *e2);
    Multiplication(const Multiplication& orig);
    void Afficher(ostream &params);
    void Afficher_npi(ostream &params);
    float Calculer();
    ~Multiplication();
    
private:
    Expression* _operandeGauche;
    Expression* _operandeDroite;

};
#endif //PROJET_MULTIPLICATION_H
