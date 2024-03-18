/******************************************************************************

ponteiros e vetores

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v, i, tamanho;
    int vetor[v];
    int *p;
    srand(time(NULL));
    
    p = &v;
    printf("Digite o numero do tamanho do vetor que deseja\n");
    scanf("%d", &*p);
    
    tamanho = v;
    
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 1000; // Números aleatórios de 0 a 99
    }
    
    printf("Vetor preenchido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    
    return 0;
}
