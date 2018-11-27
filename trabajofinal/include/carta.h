#ifndef CARTA_H
#define CARTA_H
#include "random"
#include <cstdlib>
#include <iostream>
using namespace std;

class carta{
public:
    char palo;
    int valor;
    carta(int v = 0 ,char p = '\0'){
     valor = v;
     palo = p;
    }
};



#endif // CARTA_H
