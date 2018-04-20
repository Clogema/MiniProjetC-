/*#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/

#include <iostream>
#include <string>
#include "Addition.h"
#include <cstdlib>

using namespace std;


int main() {
    int x, y;
    cout << "A :";
    cin >> x;
    cout << "B :";
    cin >> y;
    
    Addition *resultat = new Addition(x, y);
    resultat-> ~Addition(); 
     

    return 0;
}


