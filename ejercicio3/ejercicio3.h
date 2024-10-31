#ifndef EJERCICIO-3_H_INCLUDED
#define EJERCICIO-3_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
#include "arbol-binario.h"
#include "listas.h"

void carga_arbol_binario(ArbolBinario A);
void pre_orden(NodoArbol N);
void busqueda_padre(ArbolBinario A, int clave);
void lista_hijos(int clave, ArbolBinario A);
void hermano(ArbolBinario A, int clave);
int nivel_nodo(ArbolBinario A, int clave);
int a_altura(ArbolBinario A,int clave);
void nodos_a_buscar(ArbolBinario A, int nivel_buscado);

#endif // ejercicio3
