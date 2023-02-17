#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 10

void merge(int vet[], int inicio, int meio, int fim){
  int i, j, tam = fim-inicio+1, p1 = inicio, p2 = meio + 1;
  int temp[tam], fim1 = 0, fim2 = 0;
  for(i=0;i<tam;i++){
    if(!fim1 && !fim2){
      if(vet[p1] < vet[p2]){
        temp[i] = vet[p1++];
      }else{
        temp[i] = vet[p2++];
      }
      if(p1 > meio) fim1 = 1;
      if(p2 > fim) fim2 = 1;
    }else{
      if(!fim1){
        temp[i] = vet[p1++];
      }else{
        temp[i] = vet[p2++];
      }
    }
  }
  for(i=0,j=inicio;i<tam;i++,j++){
    vet[j] = temp[i];
  }
}
void merge_sort(int vet[], int inicio, int fim){
  int meio;
  if(inicio < fim){
    meio = floor((inicio+fim)/2);
    merge_sort(vet, inicio, meio);
    merge_sort(vet, meio+1, fim);
    merge(vet,inicio,meio,fim);
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
  merge_sort(vet, 0, MAX-1);
  for(i=0;i<MAX;i++){
    printf("%d ",vet[i]);
  }
  return 0;
}