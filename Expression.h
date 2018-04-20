//
// Created by isen on 20/04/18.
//

#ifndef PROJET_EXPRESSION_H
#define PROJET_EXPRESSION_H


class Expression {
    
public:
    Expression();
    Expression(const Expression& orig);
    virtual void Afficher()=0;
    virtual void Afficher_npi()=0;
    virtual float Calculer()=0;
    ~Expression();
    
private:
    float _constante;

};

#endif //PROJET_EXPRESSION_H