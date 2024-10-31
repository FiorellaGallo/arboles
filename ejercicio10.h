#ifndef ejercicio10_h
#define ejercicio10_h
#include <stdio.h>
#include <stdlib.h>
#include "arbol-avl.h"
#include "arbol-binario-busqueda.h"
#include "nodo.h"
#include "tipo_elemento.h"

int altura(NodoArbol nodo);

void cargarArboles(ArbolAVL arbol_avl, ArbolBinarioBusqueda arbol_abb);

void comparar(int repeticiones);

#endif // ejercicio10_h
