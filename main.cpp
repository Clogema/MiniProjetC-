#include <iostream>
#include <string>
#include "Addition.h"
#include "Constante.h"
#include <cstdlib>

using namespace std;


int main() {

    string s;
    Constante *c;
    do {
        cout << "Expression :";
        cin >> s;
        if (isdigit(s[0])) {
            c = new Constante(stof(s));
        } else if (isalpha(s[0])) {
            if (s == "+") {
                //Addition *a = new Addition();
            } else if (s == "-") {}
            else if (s == "*") {}
            else if (s == "/") {}
        }
    }while(s != "=");
    c->Afficher();

        return 0;
}


