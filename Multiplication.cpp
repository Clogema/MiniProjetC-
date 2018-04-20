//
// Created by isen on 20/04/18.
//

#include "Multiplication.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Multiplication::Multiplication(Constante e1, Constante e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Multiplication::Calculer(){
   
    return  _operandeGauche.Calculer() * _operandeDroite.Calculer();
};

void Multiplication::Afficher(){
    _operandeGauche.Afficher();
    cout<< "*";
    _operandeDroite.Afficher();
}

void Multiplication::Afficher_npi(){
    _operandeGauche.Afficher();
    _operandeDroite.Afficher();
    cout<< "*";
}

Multiplication::Multiplication(const Multiplication& orig) {
}

Multiplication::~Multiplication() {
    
}