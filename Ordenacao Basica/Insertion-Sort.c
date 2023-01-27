#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
// INSERTION SORT
void insertion_sort(int vet[], int t){
  int i, j, atual, inicio, meio, fim;
  for(i=1; i<t; i++){
    atual = vet[i];
    inicio = 0;
    fim = i;
    while(inicio <= fim){
      meio = (inicio+fim)/2;
      if(vet[meio] > vet[i]){
        fim = meio - 1;
      }else if(vet[meio] < vet[i]){
        inicio = meio + 1;    
      }else{
        vet[i] = meio;
      }
    }   
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