#ifndef __LISTA_H
#define __LISTA_H

typedef struct NodoD {
    int dato;
    struct NodoD* sig;
    struct NodoD* ant;
}:

typedef struct {
    NodoD* cabeza;
}ListaDoblementeEnlazada;

void iniciar(ListaDoblementeEnlazada* lista);
void insertarInicio(ListaDoblementeEnlazada* lista,int valor);
void insertarFinal(ListaDoblementeEnlazada* lista,int valor);
int buscar(ListaDoblementeEnlazada* lista,int valor);
int eliminar(ListaDoblementeEnlazada* lista,int valor);

#endif
