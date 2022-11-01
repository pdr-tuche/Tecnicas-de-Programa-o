#include <stdio.h>

typedef struct vetor{
  float x;
  float y;
  float z;
}t_vetor;

t_vetor somaVetores(t_vetor v, t_vetor w){
  t_vetor soma;
  soma.x= (v.x + w.x);
  soma.y= (v.y + w.y);
  soma.z= (v.z + w.z);
  return soma;
}

int main(void) {
  t_vetor v;
  t_vetor w;

  v.x = 10.0;
  v.y = 9.3;
  v.z = 0;

  w.x = 10.0;
  w.y = 9.3;
  w.z = 0;

  t_vetor novoVetor = somaVetores(v, w);
  printf("soma do vetor = (%f, %f, %f)\n", novoVetor.x, novoVetor.y, novoVetor.z);
  return 0;
}