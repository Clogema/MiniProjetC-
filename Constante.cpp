//
// Created by isen on 20/04/18.
//

#include "Constante.h"
#include <iostream>
using namespace std;

Constante::Constante(float valeur){
    _valeur = valeur;
}

Constante::Constante(const Constante& c) {
    _valeur = c._valeur;
}

Constante::~Constante(){
}

void Constante::Afficher() {
    cout << _valeur;
}


void Constante::Afficher_npi() {
    cout << _valeur;
}

float Constante::Calculer() {
    return _valeur;
}