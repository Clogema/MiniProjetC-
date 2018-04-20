//
// Created by isen on 20/04/18.
//

#include "Division.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Division::Division(Expression e1, Expression e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Division::Calculer(){
   
    return  _operandeGauche.Calculer() / _operandeDroite.Calculer();
};

void Division::Afficher(){
    cout << "(";
    _operandeGauche.Afficher();
    cout<< "/";
    _operandeDroite.Afficher();
    cout<< ")";
}

void Division::Afficher_npi(){
}

Division::Division(const Division& orig) {
}

Division::~Division() {
    
}