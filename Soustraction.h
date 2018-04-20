//
// Created by isen on 20/04/18.
//

#ifndef PROJET_SOUSTRACTION_H
#define PROJET_SOUSTRACTION_H

class Soustraction {
    
public:
    Soustraction(Expression e1, Expression e2);
    Soustraction(const Soustraction& orig);
    void Soustraction::Afficher();
    void Soustraction::Afficher_npi();
    float Soustraction::Calculer();
    ~Soustraction();
    
private:
    Expression _operandeGauche;
    Expression _operandeDroite;

};

#endif //PROJET_SOUSTRACTION_H
