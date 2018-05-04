//
// Created by isen on 20/04/18.
//

#include "Division.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Division::Division(Expression *e1, Expression *e2) {
    
    _operandeGauche=e2;
    _operandeDroite=e1;
}

float Division::Calculer(){
   
    return  _operandeGauche->Calculer() / _operandeDroite->Calculer();
};

void Division::Afficher(ostream &params){
    params << "(";
    _operandeGauche->Afficher(params);
    params<< "/";
    _operandeDroite->Afficher(params);
    params << ")";
}

void Division::Afficher_npi(ostream &params){
    _operandeGauche->Afficher_npi(params);
    _operandeDroite->Afficher_npi(params);
    params<< "/";
}

Division::Division(const Division& orig) {
}

Division::~Division() {
    
}