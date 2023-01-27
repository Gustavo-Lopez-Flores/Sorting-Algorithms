#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define  MAX 10
/*
void bubble_sort(int vet[], int t){
  int i, continua, aux, fim = t;
  do{
    continua = 0;
    for(i=0; i<fim-1; i++){
      if(vet[i] > vet[i+1]){
        aux = vet[i];
        vet[i] = vet[i+1];
        vet[i+1] = aux;
        continua = i;
      }
    }
    fim--;
  }while(continua != 0);
}
*/
void bubble_sort_recursivo(int vet[], int t, int continua){
  int i, aux;
  if(continua == 0){
    return;
  }else{
    continua = 0;
    for(i=0; i<t-1; i++){
      if(vet[i] > vet[i+1]){
        aux = vet[i];
        vet[i] = vet[i+1];
        vet[i+1] = aux;
        continua = i;
      }
    }
    bubble_sort_recursivo(vet, --t, continua);
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
  bubble_sort_recursivo(vet, t, 1);
  for(i=0;i<MAX;i++){
    printf("%d ",vet[i]);
  }
  return 0;
}