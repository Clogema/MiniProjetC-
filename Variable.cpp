//
// Created by isen on 04/05/18.
//

#include "Variable.h"
#include <iostream>
#include <string>
using namespace std;

Variable::Variable(char valeur){
    _valeur = valeur;
    _flag = 2;
}

Variable::Variable(const Variable& c) {
    _valeur = c._valeur;
    _flag = 2;
}

Variable::~Variable(){
}

void Variable::Afficher(ostream &params) {
    params << _valeur;
}


void Variable::Afficher_npi(ostream &params) {
    params << _valeur;
}

float Variable::Calculer() {
    return NULL;
}