//
// Created by isen on 20/04/18.
//

#include "Constante.h"
#include <iostream>
using namespace std;

Constante::Constante(float valeur){
    _valeur = valeur;
    _flag = 1;
}

Constante::Constante(const Constante& c) {
    _valeur = c._valeur;
    _flag = 1;
}

Constante::~Constante(){
}

void Constante::Afficher(ostream &params) {
    params << _valeur;
}


void Constante::Afficher_npi(ostream &params) {
    params << _valeur;
}

float Constante::Calculer() {
    return _valeur;
}