#include <stdio.h>
#include <stdlib.h>
#include "TDA_Matriz.h"

void CrearListaPalabras(FILE *fp, int k){
    char **lista_palabras = (char **)malloc(10 * sizeof(char *));
    for (int i = 0; i < k; i++) {
        fscanf(fp, "%s", lista_palabras );
        lista_palabras[i] = (char *)malloc(23 * sizeof(char));
    }
    while (fscanf(fp, "%s", palabra) != EOF)

}
    

int main(int argc,  char *argv[]) {
  int x, y, k;
  FILE *tablero = fopen(argv[1], "r");
  FILE *lista = fopen(argv[2], "r");
  matriz *MatrizP;
  fscanf(tablero, "%d %d", &x, &y);
  fscanf(lista, "%d", &k);
  MatrizP = crear_TDAmatEntero(tablero, x, y);


  recorrer_TDAmatEntero(MatrizP);
  
}


