//
// Created by isen on 20/04/18.
//

#ifndef ADDITION_H
#define ADDITION_H

class Addition {
    
public:
    Addition(int x, int y);
    Addition(const Addition& orig);
    ~Addition();
    
private:
    int _x;
    int _y;

};

#endif /* ADDITION_H */