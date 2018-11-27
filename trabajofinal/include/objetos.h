#ifndef OBJETOS_H
#define OBJETOS_H
#include "carta.h"


class mazo{
    carta *head;
public:
    mazo(){
        head = new carta[52];
        //Aca contruyes cada carta
        char c;
        for(int i=0;i<4;i++){
            if(i==0) c = 'e';
            else if(i==1) c = 'd';
            else if(i==2) c = 'c';
            else c = 't';
            for(int j=1;j<14;j++){
                head[i*j] = carta(j,c);
            }
        }
    }
};


#endif // OBJETOS_H
