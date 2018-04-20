//
// Created by isen on 20/04/18.
//

#ifndef PROJET_MULTIPLICATION_H
#define PROJET_MULTIPLICATION_H

class Multiplication {
    
public:
    Multiplication(Expression e1, Expression e2);
    Multiplication(const Multiplication& orig);
    void Multiplication::Afficher();
    void Multiplication::Afficher_npi();
    float Multiplication::Calculer();
    ~Multiplication();
    
private:
    Expression _operandeGauche;
    Expression _operandeDroite;

};
#endif //PROJET_MULTIPLICATION_H
