//
// Created by isen on 20/04/18.
//

#ifndef PROJET_EXPRESSION_H
#define PROJET_EXPRESSION_H


class Expression {
    
public:
    Expression();
    Expression(const Addition& orig);
    virtual void Afficher();
    virtual void Calculer();
    ~Expression();
    
private:
    float _constante;

};

#endif //PROJET_EXPRESSION_H