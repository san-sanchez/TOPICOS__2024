#ifndef MY_MATRIZ_H_INCLUDED
#define MY_MATRIZ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM_COL   100



void __function__(int Mat[][TAM_COL],int fila);
void Mostrar__Matriz(int mat[][TAM_COL],int f,int c);
void **Generar_Matriz(size_t Tam_Element,size_t Colum,size_t File);
void Mostrar_Diagonal_Principal(int Mat[][TAM_COL],size_t FC );

#endif // MY_MATRIZ_H_INCLUDED
