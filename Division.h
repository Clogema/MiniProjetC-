//
// Created by isen on 20/04/18.
//

#ifndef PROJET_DIVISION_H
#define PROJET_DIVISION_H


class Division {
    
public:
    Division(Expression e1, Expression e2);
    Division(const Division& orig);
    void Division::Afficher();
    void Division::Afficher_npi();
    float Division::Calculer();
    ~Division();
    
private:
    Expression _operandeGauche;
    Expression _operandeDroite;

};

#endif //PROJET_DIVISION_H
