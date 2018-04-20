//
// Created by isen on 20/04/18.
//

#ifndef PROJET_DIVISION_H
#define PROJET_DIVISION_H


#include "Constante.h"
#include "Operateur.h"


class Division : public Operateur {
    
public:
    Division(Expression* e1, Expression* e2);
    Division(const Division& orig);
    void Afficher(ostream &params);
    void Afficher_npi();
    float Calculer();
    ~Division();
    
private:
    Expression* _operandeGauche;
    Expression* _operandeDroite;

};

#endif //PROJET_DIVISION_H
