//
// Created by isen on 20/04/18.
//

#include "Multiplication.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Multiplication::Multiplication(Expression e1, Expression e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Multiplication::Calculer(){
   
    return  _operandeGauche.Calculer() * _operandeDroite.Calculer();
};

void Multiplication::Afficher(){
    cout << "(";
    _operandeGauche.Afficher();
    cout<< "*";
    _operandeDroite.Afficher();
    cout<< ")";
}

void Multiplication::Afficher_npi(){
}

Multiplication::Multiplication(const Multiplication& orig) {
}

Multiplication::~Multiplication() {
    
}