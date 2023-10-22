#include <stdio.h>
#include <stdlib.h> // Para a função rand

void InsertionSort(int* v, int tam) {
      int i, j, k, chave;
    int passos = 0; // Variável para contar o número de passos

    for (j = 1; j < tam; j++) {
        chave = v[j];
        i = j - 1;

        // Imprime o elemento selecionado e o array antes do passo.
        printf("Elemento selecionado no passo %d: %d\n", j, chave);
        printf("Array antes do passo %d: ", j);
        for (k = 0; k < tam; k++) {
            printf("%d ", v[k]);
        }
        printf("\n");

        while ((i >= 0) && (v[i] > chave)) {
            v[i + 1] = v[i];
            i--;
            passos++; // Incrementa o número de passos
        }
        v[i + 1] = chave;

        // Imprime o array após o passo.
        printf("Array após o passo %d: ", j);
        for (k = 0; k < tam; k++) {
            printf("%d ", v[k]);
        }
        printf("\n");
    }

    // Imprime o número total de passos.
    printf("Número total de passos: %d\n", passos);
}

int main() {
    int arr[1000]; // Cria um array com espaço para mil números
    int tam = sizeof(arr) / sizeof(arr[0]);

    // Preenche o array com números aleatórios entre 1 e 1000
    for (int i = 0; i < tam; i++) {
        arr[i] = rand() % 10000 + 1;
    }

    printf("Array original: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    InsertionSort(arr, tam);

    printf("\nArray ordenado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
