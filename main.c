#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
int V [8] = {96, 34, 2, 17, 23, 16, 56, 43};

for (int i = 0; i<8; i++) {
  printf("V[%d] =  %d \n", i, V[i]);
}

// dividir
int v1 [4],v2 [4];

int in, fim, me;

in = 0;
fim = sizeof(V)/sizeof(V[0]);
me = fim/2;

printf("tamanho do vetor: %d \n", fim);
printf("---------- inicio do vetor: %d \n" , in);
printf("---------- meio do vetor: %d \n", me);

}

/*

dividir

conquistar

combinar


*/