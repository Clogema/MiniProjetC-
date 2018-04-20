//
// Created by isen on 20/04/18.
//

#include "Soustraction.h"
#include "Constante.h"
#include <iostream>

using namespace std;

Soustraction::Soustraction(Expression *e1, Expression *e2) {
    
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Soustraction::Calculer(){
   
    return  _operandeGauche->Calculer() - _operandeDroite->Calculer();
};

void Soustraction::Afficher(ostream &params){
    cout << "(";
    _operandeGauche->Afficher(params);
    cout<< "-";
    _operandeDroite->Afficher(params);
    cout<< ")";
}

void Soustraction::Afficher_npi(){
    _operandeGauche->Afficher_npi();
    _operandeDroite->Afficher_npi();
    cout<< "-";
}

Soustraction::Soustraction(const Soustraction& orig) {
}

Soustraction::~Soustraction() {
    
}
