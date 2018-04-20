//
// Created by isen on 20/04/18.
//


#ifndef PROJET_OPERATEUR_H
#define PROJET_OPERATEUR_H
#include "Expression.h"


class Operateur : public Expression {
    
public:
    Operateur();
    Operateur(const Operateur& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Operateur();
    
private:
    

};

#endif //PROJET_OPERATEUR_H
