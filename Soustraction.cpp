//
// Created by isen on 20/04/18.
//

#include "Soustraction.h"
#include "Constante.h"
#include <iostream>

using namespace std;

Soustraction::Soustraction(Expression *e1, Expression *e2) {
    
    _operandeGauche=e2;
    _operandeDroite=e1;
}

float Soustraction::Calculer(){
   
    return  _operandeGauche->Calculer() - _operandeDroite->Calculer();
};

void Soustraction::Afficher(ostream &params){
    params << "(";
    _operandeGauche->Afficher(params);
    params<< "-";
    _operandeDroite->Afficher(params);
    params<< ")";
}

void Soustraction::Afficher_npi(ostream &params){
    _operandeGauche->Afficher_npi(params);
    _operandeDroite->Afficher_npi(params);
    params<< "-";
}

Soustraction::Soustraction(const Soustraction& orig) {
}

Soustraction::~Soustraction() {
    
}
