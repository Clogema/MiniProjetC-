#include <iostream>
#include <string>
#include "Addition.h"
#include "Constante.h"
#include "Soustraction.h"
#include <cstdlib>
#include <stack>
#include <fstream>
using namespace std;


int main() {
/*
    string chaine;
    Expression *e1, *e2;
    stack <Expression*> pile;

    do {
        cout << "Expression : ";
        cin >> chaine;

        if (isdigit(chaine[0])) {
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
                a->Afficher();
                pile.push(a);
            } else if (chaine == "-") {
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();
                Soustraction *s = new Soustraction(e1,e2);
                s->Afficher();
                pile.push(s);}
            else if (chaine == "*") {}
            else if (chaine == "/") {}
        }
    }while(chaine != "=");
*/
    Expression *e1 = new Constante(10);
    
    
    string s = "s";
    if( s == "s"){
        ofstream fichier("test.txt");  // ouverture en écriture avec effacement du fichier ouvert
        e1->Afficher(fichier);
    };

        return 0;
}


