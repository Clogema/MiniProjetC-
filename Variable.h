//
// Created by isen on 04/05/18.
//

#ifndef PROJET_VARIABLE_H
#define PROJET_VARIABLE_H


#include "Expression.h"
#include <iostream>
#include <string>
#include <ostream>

class Variable : public Expression {

protected:
    char _valeur;

public:
    Variable(char valeur = '\0');
    Variable(const Variable& c);
    ~Variable();

    void Afficher(ostream &params);
    void Afficher_npi(ostream &params);
    float Calculer();
};



#endif //PROJET_VARIABLE_H
