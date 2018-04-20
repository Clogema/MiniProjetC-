//
// Created by isen on 20/04/18.
//

#ifndef PROJET_EXPRESSION_H
#define PROJET_EXPRESSION_H


#include "Addition.h"

class Expression {
    
public:
    Expression();
    Expression(const Addition& orig);
<<<<<<< HEAD
    virtual void Afficher()=0;
    virtual void Afficher_npi()=0;
    virtual void Calculer()=0;
=======
    virtual void Afficher() = 0;
    virtual void Afficher_npi() = 0;
    virtual void Calculer() = 0;
>>>>>>> ccac118c0d7f3e0a0b36ad96f85527849e4e55a4
    ~Expression();
    
private:
    float _constante;

};

#endif //PROJET_EXPRESSION_H