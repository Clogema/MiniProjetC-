//
// Created by isen on 20/04/18.
//

#include "Multiplication.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Multiplication::Multiplication(Expression *e1, Expression *e2) {
    
    _operandeGauche=e2;
    _operandeDroite=e1;
}

float Multiplication::Calculer(){
   
    return  _operandeGauche->Calculer() * _operandeDroite->Calculer();
};

void Multiplication::Afficher(ostream &params){

    params << "(";
    _operandeGauche->Afficher(params);
    params<< "*";
    _operandeDroite->Afficher(params);
    params << ")";
}

void Multiplication::Afficher_npi(ostream &params){
    _operandeGauche->Afficher_npi(params);
    _operandeDroite->Afficher_npi(params);
    params<< "*";
}

Multiplication::Multiplication(const Multiplication& orig) {
}

Multiplication::~Multiplication() {
    
}