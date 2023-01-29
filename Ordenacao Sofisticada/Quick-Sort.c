#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define MAX 10
/*
int compar(const void * a, const void * b){
  if(*(int*)a == *(int*)b){
    return 0;
  }else if (*(int*)a < *(int*)b){
    return -1;
  }else{
    return 1;
  }
}
*/
void quick_sort(int vet[], int inicio, int fim){
  int esq, dir, pivo, aux;
  esq = inicio;
  dir = fim;
  pivo = vet[(inicio+fim)/2];
  while(esq <= dir){
    while(vet[esq] < pivo && esq < fim){
      esq++;
    }
    while(vet[dir] > pivo && dir > inicio){
      dir--;
    }
    if(esq <= dir){
      aux = vet[esq];
      vet[esq] = vet[dir];
      vet[dir] = aux;
      esq++;
      dir--;
    }
  }
  if(dir>inicio){
    quick_sort(vet, inicio, dir);   
  }
  if(esq<fim){
    quick_sort(vet, esq, fim);    
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
  //qsort(vet, t, sizeof(int), compar);
  quick_sort(vet,0,t);
  for(i=0;i<MAX;i++){
    printf("%d ",vet[i]);
  }
  return 0;
}