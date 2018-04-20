//
// Created by isen on 20/04/18.
//

#include "Addition.h"
#include <iostream>


using namespace std;

Addition::Addition(Expression* e1, Expression* e2) {
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Addition::Calculer(){
   
    return  _operandeGauche->Calculer() + _operandeDroite->Calculer();
};

void Addition::Afficher(ostream &params){
    params << "(";
    _operandeGauche->Afficher(params);
    params<< "+";
    _operandeDroite->Afficher(params);
    params<< ")";
}

void Addition::Afficher_npi(){
    _operandeGauche->Afficher_npi();
    _operandeDroite->Afficher_npi();
    cout<< "+";
}

Addition::Addition(const Addition& orig) {
}

Addition::~Addition() {
    
}
