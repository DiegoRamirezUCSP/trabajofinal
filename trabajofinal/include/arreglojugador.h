#include <iostream>
#ifndef ARREGLOJUGADOR_H
#define ARREGLOJUGADOR_H


using namespace std;
template<typename T>
class arreglojugador
{
    int size;
    T *jug;
    void resizeju(int newSize){
        T *pts = new T[newSize];
        int minSize = ( newSize > size ? size : newSize);
        for (int i = 0; i < minSize ; i++)
            pts[i] = jug[i];
        delete[] jug;
        size = newSize;
        jug = pts;
    }

    public:

    arreglojugador(){
        size = 0;
        jug = new T[size];
    }

    arreglojugador(const T pts[],const int sizee){
        size = sizee;
        jug=new T[sizee];
        for(int i = 0;i < sizee; ++i)
            jug[i] = pts[i];
    }
    arreglojugador(const arreglojugador &np){
        size = np.size;
        jug = new T[size];
        for(int i = 0; i < size; i++)
            jug[i]= np.jug[i];
    }
    ~arreglojugador(){
        delete[] jug;
    }
    void push_backk(const T &newplayer) {
    resizeju(size + 1);
    jug[size - 1] = newplayer;
}
    //void insert(const int pos ,const jugador &p);
    void removee(const int pos){
    if((pos >= 0) && (pos < size)){
        for(int i = pos; i < size - 2; i++)
            jug[i] = jug[i + 1];
        resizeju(size - 1);
        }
    }


};

    #endif // ARREGLOJUGADOR_H
