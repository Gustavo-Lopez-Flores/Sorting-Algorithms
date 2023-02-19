#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 10

void cria_heap (int vet[], int pai, int fim) {
  int aux = vet[pai];
  int filho = 2 * pai + 1;
  while (filho <= fim) {
  if (filho < fim) {
    if (vet[filho] < vet[filho + 1])
      filho = filho + 1;
  }
  if (aux < vet[filho]) {
    vet[pai] = vet[filho];
    pai = filho;
    filho = 2 * pai + 1;
  }
  else
    filho = fim + 1;
  }
  vet[pai] = aux;
}

void heap_sort (int vet[], int tam) {
  int i, aux;
  for (i = (tam - 1) / 2; i >= 0; i--) {
    cria_heap(vet, i, tam - 1);
  }
  for (i = tam - 1; i >= 1; i--) {
  aux = vet[0];
  vet[0] = vet[i];
  vet[i] = aux;
  cria_heap(vet, 0, i - 1);
  }
}

int main()
{ 
  srand(time(NULL));
  int i, vet[MAX];
  for(i=0;i<MAX;i++){
    vet[i] = rand() % 100;
    printf("%d ",vet[i]);
  }
  printf("\n");
  heap_sort(vet, MAX);
  for(i=0;i<MAX;i++){
    printf("%d ",vet[i]);
  }
  return 0;
}