//
// Created by isen on 20/04/18.
//

#ifndef PROJET_EXPRESSION_H
#define PROJET_EXPRESSION_H
#include <ostream>

using namespace std;

class Expression {

protected:
    float _flag;

public:
    Expression();
    Expression(const Expression& orig);
    float getFlag();
    virtual void Afficher(ostream &params)=0;
    virtual void Afficher_npi(ostream &params)=0;
    virtual float Calculer()=0;
    ~Expression();
    
private:

};

#endif //PROJET_EXPRESSION_H