#include <iostream>
#include "elementos.h"
#include "objetos.h"
#include "carta.h"
#include "arreglojugador.h"

int comparar(){
    int b;
    cout << "numero de jugadores : ";
    cin >> b;
    if(b <= 1){

        cout << "Numero de jugadores invalido." << endl;
        return comparar();
    }else if(b > 6){
        cout << "Numero de jugadores no mayor a 6." << endl;
        return comparar();
    }
    return b;
}

int main()
{
    int in = comparar();
    Juego MiJuego(in);
    MiJuego.win();

}
