<img align="right" width="150" src="https://media2.giphy.com/media/ZtwEXtGMG80xWetwUb/giphy.gif?cid=ecf05e47cdshqjx6qovpt85097s24b6l964stqes0ard1zfj&rid=giphy.gif&ct=g"/>

> # [Ordenação Simples](https://github.com/Gustavo-Lopez-Flores/sorting-algorithms/tree/main/Ordenacao%20Basica)

### [`Insertion sort`](https://github.com/Gustavo-Lopez-Flores/sorting-algorithms/blob/main/Ordenacao%20Basica/Insertion-Sort.c) <br>

Insertion Sort (**Busca Sequencial**) 
- Pior Caso: O(n²)
  - Quando o vetor se encontra na ordem inversa a desejada.
- Melhor Caso: O(n)
  - Quando o vetor se encontra ordenado, somente n – 1 comparações.
- Caso Médio: O(n²)
  - Os demais casos, exceto pior e melhor caso.

Insertion Sort (**Busca Binária**)
- Pior Caso: O(log n) 
  - Realiza comparações no pior caso. Porém o algoritmo como um todo ainda tem complexidade: O(n²)!
- Melhor Caso: O(n)
  - Quando o local onde será inserido o elemento no subvetor ordenado é “próximo do centro”.
- Caso Médio: O(n²)
  - Os demais casos, exceto pior e melhor caso.

### [`Selection sort`](https://github.com/Gustavo-Lopez-Flores/sorting-algorithms/blob/main/Ordenacao%20Basica/Selection-Sort.c) <br>
> O número de comparações é igual para o melhor caso, caso médio e o pior caso, mesmo que o vetor esteja ordenado o custo continua quadrático (n²).
- Melhor Caso: O(n²)
- Pior Caso: O(n²)
- Caso Médio: O(n²)

### [`Bubble sort`](https://github.com/Gustavo-Lopez-Flores/sorting-algorithms/blob/main/Ordenacao%20Basica/Bubble-Sort.c) <br>
- Melhor Caso: O(n)
  - Quando o vetor já se encontra ordenado nenhuma troca ocorre na
  primeira varredura.
  - Custo linear: n - 1 comparações.
- Pior Caso: O(n²)
  - Quando o vetor se encontra na ordem inversa a desejada.
  - A cada varredura apenas uma chave será colocada em sua posição definitiva.
- Caso Médio: O(n²)
  - Vetor parcialmente ordenado.

### `Comb sort` ...
<br>
  
> ## [Ordenação Sofisticada](https://github.com/Gustavo-Lopez-Flores/sorting-algorithms/tree/main/Ordenacao%20Sofisticada)

### `Merge sort` <br>
- Melhor Caso: O(n log n)
  - Nunca é necessário trocar após comparações.
- Pior Caso: O(n log n)
  - Sempre é necessário trocar após comparações.
- Caso Médio: O(n log n) 
  - Há necessidade de haver trocas após comparações.
  
### `Heapsort` <br>
> Comparações no pior caso: 2n logn + O(n). Trocas no pior caso: n logn + O(n) é o mesmo que n logn + O(n).
- Melhor Caso: O(n log n)
- Pior Caso: O(n log n)
- Caso Médio: O(n log n) 

### `Shell sort`
...
<br>

### `Radix sort` 
...
<br>

### `Gnome sort`
...
<br>

### `Counting sort`
...
<br>

### `Bucket sort`
...
<br>

### `Cocktail sort`
...
<br>

### `Timsort`
...
<br>

### [`Quick sort`](https://github.com/Gustavo-Lopez-Flores/sorting-algorithms/blob/main/Ordenacao%20Sofisticada/Quick-Sort.c) <br>
- Melhor Caso: O(n log n)
  - Ocorre quando o problema é sempre dividido em subproblemas de igual tamanho após a partição.
- Pior Caso: O(n²)
  - O pior caso ocorre quando, sistematicamente, o pivô é escolhido como sendo um dos valores extremos do conjunto.
- Caso Médio: O(n log n)
  - Subproblemas são divididos em tamanhos não tão desbalanceados.
