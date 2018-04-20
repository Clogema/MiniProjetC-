//
// Created by isen on 20/04/18.
//

#include "Multiplication.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Multiplication::Multiplication(Expression* e1, Expression* e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Multiplication::Calculer(){
   
    return  _operandeGauche->Calculer() * _operandeDroite->Calculer();
};

void Multiplication::Afficher(ostream &params){
    _operandeGauche->Afficher(params);
    cout<< "*";
    _operandeDroite->Afficher(params);
}

void Multiplication::Afficher_npi(){
    _operandeGauche->Afficher_npi();
    _operandeDroite->Afficher_npi();
    cout<< "*";
}

Multiplication::Multiplication(const Multiplication& orig) {
}

Multiplication::~Multiplication() {
    
}