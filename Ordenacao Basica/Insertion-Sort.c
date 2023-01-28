#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
// INSERTION SORT
void insertion_sort (int vet[], int tamanho) {
  int i, j, aux;
  for (i = 1; i < tamanho; i++) {
    aux = vet[i];
    for (j = i; (j > 0) && (aux < vet[j - 1]); j--){
      vet[j] = vet[j - 1];
    }
    vet[j] = aux;
  }
}
int main()
{ 
  srand(time(NULL));
  int i, t = MAX, vet[MAX];
  for(i=0;i<MAX;i++){
    vet[i] = rand() % 100;
    printf("%d ",vet[i]);
  }
  printf("\n");
  insertion_sort(vet, t);
  for(i=0;i<MAX;i++){
    printf("%d ",vet[i]);
  }
  return 0;
}