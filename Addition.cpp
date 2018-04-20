//
// Created by isen on 20/04/18.
//

#include "Addition.h"
#include <iostream>

using namespace std;

Addition::Addition(Expression e1, Expression e2) {
    _operandeGauche=e1;
    _operandeDroite=e2;
}

float Addition::Calculer(){
   
    return  _operandeGauche.Calculer() + _operandeDroite.Calculer();
};

void Addition::Afficher(){
    cout << "(";
    _operandeGauche.Afficher();
    cout<< "+";
    _operandeDroite.Afficher();
    cout<< ")";
}

void Addition::Afficher_npi(){
}

Addition::Addition(const Addition& orig) {
}

Addition::~Addition() {
    
}
