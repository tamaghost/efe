#include <stdio.h>
#include <stdlib.h>

typedef struct Mat{
  int m; //número de filas de la matriz
  int n; //número de columnas de la matriz
  int **matPa;//matriz
}matriz;

matriz *crear_TDAmatEntero(FILE *fp, int m, int n);
void recorrer_TDAmatEntero(matriz *p);

matriz *crear_TDAmatEntero(FILE *fp, int m, int n){
  matriz *p;
  p = (matriz*) malloc(sizeof(matriz));
  p->n = n; //número de columnas de la matriz
  p->m = m; //número de filas de la matriz
  p->matPa = (int**) malloc(sizeof(int*) * m);
  for(int i = 0 ; i <= m-1 ; i++){
     p->matPa[i] = (int*) malloc(sizeof(int) * n);
  }
  //Inicializar
  for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ;j++){
      fscanf(fp, " %c ", &p->matPa[i][j]);
    }
  }
  fclose(fp);
  return p;
}

void recorrer_TDAmatEntero(matriz *p){
  for(int i = 0 ; i < p->m ; i++){
    for(int j = 0 ; j < p->n ;j++){
        printf("  %c ",p->matPa[i][j] );
    }
    printf("\n");
  }
  printf("\n");
}