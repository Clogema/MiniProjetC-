//
// Created by isen on 20/04/18.
//

#include "Division.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Division::Division(Expression* e1, Expression* e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Division::Calculer(){
   
    return  _operandeGauche->Calculer() / _operandeDroite->Calculer();
};

void Division::Afficher(ostream &params){
    _operandeGauche->Afficher(params);
    cout<< "/";
    _operandeDroite->Afficher(params);
}

void Division::Afficher_npi(){
    _operandeGauche->Afficher_npi();
    _operandeDroite->Afficher_npi();
    cout<< "/";
}

Division::Division(const Division& orig) {
}

Division::~Division() {
    
}