//
// Created by isen on 20/04/18.
//

#ifndef PROJET_MULTIPLICATION_H
#define PROJET_MULTIPLICATION_H

#include "Constante.h"
#include "Operateur.h"

class Multiplication : public Operateur{
    
public:
    Multiplication(Constante e1, Constante e2);
    Multiplication(const Multiplication& orig);
    void Afficher();
    void Afficher_npi();
    float Calculer();
    ~Multiplication();
    
private:
    Constante _operandeGauche;
    Constante _operandeDroite;

};
#endif //PROJET_MULTIPLICATION_H
