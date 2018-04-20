//
// Created by isen on 20/04/18.
//

#include "Soustraction.h"
#include "Expression.h"
#include <iostream>

using namespace std;

Soustraction::Soustraction(Expression e1, Expression e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Soustraction::Calculer(){
   
    return  _operandeGauche.Calculer() - _operandeDroite.Calculer();
};

void Soustraction::Afficher(){
    cout << "(";
    _operandeGauche.Afficher();
    cout<< "-";
    _operandeDroite.Afficher();
    cout<< ")";
}

void Soustraction::Afficher_npi(){
    _operandeGauche.Afficher();
    _operandeDroite.Afficher();
    cout<< "-";
}

Soustraction::Soustraction(const Soustraction& orig) {
}

Soustraction::~Soustraction() {
    
}
