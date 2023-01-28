#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 10
/*
void selection_sort(int vet[], int t){
  int i, j, menor;
  int troca;
  for(i=0; i<(t-1); i++){
    menor = i;
    for(j=i+1; j<t; j++){
      if(vet[j] < vet[menor]){
        menor = j;
      }
    }
    if(i != menor){
      troca = vet[i];
      vet[i] = vet[menor];
      vet[menor] = troca;
    }
  }
}
*/
// 
void selection_sort_recursivo(int vet[], int t, int i){
  int j, menor, troca;
  if(i<t-1){
    menor = i;
    for(j=i+1; j<t; j++){
      if(vet[j] < vet[menor]){
        menor = j;
      }
    }
    if(i != menor){
      troca = vet[i];
      vet[i] = vet[menor];
      vet[menor] = troca;
    }
    selection_sort_recursivo(vet, t, ++i);
  }else{
    return;
  }
}
// MAIN
int main()
{ 
  srand(time(NULL));
  int i, vet[MAX];
  for(i=0;i<MAX;i++){
    vet[i] = rand() % 100;
    printf("%d ",vet[i]);
  }
  printf("\n");
  selection_sort_recursivo(vet, MAX, 0);
  for(i=0;i<MAX;i++){
    printf("%d ",vet[i]);
  }
  return 0;
}