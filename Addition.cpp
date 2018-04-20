//
// Created by isen on 20/04/18.
//

#include "Addition.h"
#include <iostream>

using namespace std;

Addition::Addition(int x, int y) {
    int R;
    _x=x;
    _y=y;
    R=_x+_y;
    cout << "A+B = " << R;
    cout << endl;
}


Addition::Addition(const Addition& orig) {
}

Addition::~Addition() {
    
}
