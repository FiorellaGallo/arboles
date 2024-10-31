#ifndef EJERCICIO4_H_INCLUDED
#define EJERCICIO4_H_INCLUDED
#include "arbol-binario.h"
#include "listas.h"

void cargar_arbol_n_ario(ArbolBinario A);
void anchura(ArbolBinario A);
int cantidad_hojas(ArbolBinario);
bool comparar(ArbolBinario B, ArbolBinario C);
void busqueda_padre(ArbolBinario A, int clave);
Lista hermanos(ArbolBinario A, int clave);
#endif // ejercicio4
