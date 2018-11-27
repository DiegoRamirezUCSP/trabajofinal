#ifndef ELEMENTOS_H
#define ELEMENTOS_H
#include "carta.h"
#include "arreglojugador.h"
#include "objetos.h"
//#include "jugador.h"


class listaCartas{
public:
    carta* head;
    listaCartas(int n){
        head = new carta[n];
    }
    virtual void mostrar() = 0;
};

class mano:public listaCartas{
public:
    mano():listaCartas(2){};
    void mostrar(){return;}
};


class mesa:public listaCartas{
public:
    int pozo;
    mesa(): listaCartas(5)
    { pozo = 0;}
    void mostrar(){return;}
};

class jugador{
    public:
        jugador(string a = "",int b = 0):  nombre(a), dinero(b){};
        void print(){
            cout << nombre << " , "  << dinero <<endl;
            miMano.mostrar();
        }
        string nombre;
        int dinero;
        mano miMano;
};

class Juego{
    jugador* lista_jugadores;
    mazo miMazo;
    mesa miMesa;
    int num;
    string nom;
public:
    Juego(int n){
        num = n;
        lista_jugadores = new jugador[n];
        for(int i=1;i <= n;i++){
            cout << "Ingrese su nombre jugador "  << i  << " : ";
            cin >> nom;
            lista_jugadores[i] = jugador(nom,500);
        }
        arreglojugador<jugador> p(lista_jugadores,n);
        for(int i = 1;i <= n;i++)
            lista_jugadores[i].print();

    }
    void repartir(const arreglojugador<jugador> listaju,const int jugad){
       // for(int i = 0;i < jugad;i++)

    };

    void win(){
        int ganador = 0;
        int puntaje = 0; //Puntaje del jugador actual
        int gPuntaje = 0; //Puntaje del ganador
        for(int i = 0;i<num;i++){
            puntaje = 0;
            for(int j = 0;j<2;j++){
                //Con esto recorres cada carta
                //de cada jugador
                puntaje += lista_jugadores[i].miMano.head[j].valor;
                //Compruebas si es que supera el
                //puntaje del anterior jugador
                if(puntaje > gPuntaje){
                    gPuntaje = puntaje;
                    ganador = i;
                }
            }
        }

        cout<< lista_jugadores[ganador].nombre <<endl;
    }

};
#endif // ELEMENTOS_H
