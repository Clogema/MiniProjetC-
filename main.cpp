#include <iostream>
#include <string>
#include "Addition.h"
#include "Constante.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Variable.h"
#include <cstdlib>
#include <stack>
#include <typeinfo>
#include <fstream>
using namespace std;


int main() {

    string chaine;
    string valeur;
    Expression *e1, *e2;
    Expression *e1S, *e2S;
    stack <Expression*> pileS;
    stack <Expression*> pile;


    do {
        cout << "Expression : ";
        cin >> chaine;


        /* Si l'expression est un nombre*/
        if (isdigit(chaine[0]) || isdigit(chaine[1])) {
            e1 = new Constante(stof(chaine));
            pile.push(e1);
            pileS.push(e1);
        }

        /* Si l'expression est un opérateur*/
        else if (isalpha(chaine[0]) == false) {
            /* Si l'expression est ue addition*/
            if (chaine == "+") {
                /* PILE NORMALE */
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();

                /* PILE SIMPLIFIEE */
                e1S = pileS.top();
                pileS.pop();
                e2S = pileS.top();
                pileS.pop();
                //
                Addition *o = new Addition(e1,e2);
                pile.push(o);


                if(e1S->getFlag()== 1 && e2S->getFlag() == 1){
                    Constante *c = new Constante(pile.top()->Calculer());
                    pileS.push(c);
                }else{
                    Addition *o = new Addition(e1S,e2S);
                    pileS.push(o);
                }
            }
            /* Si l'expression est une soustraction*/
            else if (chaine == "-") {
                /* PILE NORMALE */
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();

                /* PILE SIMPLIFIEE */
                e1S = pileS.top();
                pileS.pop();
                e2S = pileS.top();
                pileS.pop();
                //
                Soustraction *o = new Soustraction(e1,e2);
                pile.push(o);


                if(e1S->getFlag()== 1 && e2S->getFlag() == 1){
                    Constante *c = new Constante(pile.top()->Calculer());
                    pileS.push(c);
                }else{
                    Soustraction *o = new Soustraction(e1S,e2S);
                    pileS.push(o);
                }
            }
            /* Si l'expression est une multiplication*/
            else if (chaine == "*") {
                /* PILE NORMALE */
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();

                /* PILE SIMPLIFIEE */
                e1S = pileS.top();
                pileS.pop();
                e2S = pileS.top();
                pileS.pop();
                //
                Multiplication *o = new Multiplication(e1,e2);
                pile.push(o);


                if(e1S->getFlag()== 1 && e2S->getFlag() == 1){
                    Constante *c = new Constante(pile.top()->Calculer());
                    pileS.push(c);
                }else{
                    Multiplication *o = new Multiplication(e1S,e2S);
                    pileS.push(o);
                }
            }
            /* Si l'expression est une division*/
            else if (chaine == "/") {
                /* PILE NORMALE */
                e1 = pile.top();
                pile.pop();
                e2 = pile.top();
                pile.pop();

                /* PILE SIMPLIFIEE */
                e1S = pileS.top();
                pileS.pop();
                e2S = pileS.top();
                pileS.pop();
                //
                Division *o = new Division(e1,e2);
                pile.push(o);


                if(e1S->getFlag()== 1 && e2S->getFlag() == 1){
                    Constante *c = new Constante(pile.top()->Calculer());
                    pileS.push(c);
                }else{
                    Division *o = new Division(e1S,e2S);
                    pileS.push(o);
                }
            }
        }
        /* Si l'expression est une variable*/
        else{
            e1 = new Variable(chaine[0]);
            pileS.push(e1);
            cout << "Quelle est la valeur de cette lettre ? ";
            cin >> valeur;
            pile.push(new Constante(stof(valeur)));
        }

        /* Pour lire l'expression écrite dans le fichier */

        if(chaine == "f"){
            ifstream fichier("test.txt", ios::in);  // on ouvre en lecture
            if(fichier){  // si l'ouverture a fonctionné
                string contenu;  // déclaration d'une chaîne qui contiendra la ligne lue
                getline(fichier, contenu);  // on met dans "contenu" la ligne
                cout << contenu;  // on affiche la ligne
                cout << "\n";  // on affiche la ligne
                fichier.close();
            }else
                cerr << "Impossible d'ouvrir le fichier !" << endl;
        }
    }
    while(chaine != "=");

    /* AFFICHAGE DES RESULTATS */
    ofstream fichier("test.txt");
    pile.top()->Afficher(fichier);
    cout << "** RESULTAT : ";
    pile.top()->Afficher(cout);
    cout << " = " << pile.top()->Calculer() << endl;
    cout << "** EXPRESSION NPI : ";
    pile.top()->Afficher_npi(cout);
    cout << endl;
    cout << "** EXPRESSION SIMPLIFIEE : ";
    pileS.top()->Afficher(cout);

        return 0;
}


