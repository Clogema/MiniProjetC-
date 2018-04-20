#include <iostream>
#include <string>
#include "Addition.h"
#include "Constante.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"
#include <cstdlib>
#include <stack>
#include <queue>
using namespace std;


int main() {

    string chaine;
    Expression *e1, *e2;
    stack <Expression*> pile;

    do {
        cout << "Expression : ";
        cin >> chaine;

        if (isdigit(chaine[0]) || isdigit(chaine[1])) {
            e1 = new Constante(stof(chaine));
            pile.push(e1);
        }
        else if (isalpha(chaine[0]) == false) {
            if (chaine == "+") {
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();
                Addition *a = new Addition(e1,e2);
                pile.push(a);
            } else if (chaine == "-") {
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();
                Soustraction *s = new Soustraction(e1, e2);
                pile.push(s);
            }else if (chaine == "*") {
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();
                Multiplication *m = new Multiplication(e1, e2);
                pile.push(m);}
            else if (chaine == "/") {
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();
                Division *d = new Division(e1, e2);
                pile.push(d);
            }
        }
    }
    while(chaine != "=");
    pile.top()->Afficher();

        return 0;
}


