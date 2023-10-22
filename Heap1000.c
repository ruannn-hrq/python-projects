#include <stdio.h>

void Heapfica(int* v, int pai, int tam, int* steps) {
    int percorreu, folhamaior, temp, k;
    percorreu = 0;
    int maxIndex = pai; // To keep track of the element that becomes the heap maximum

    while ((pai * 2 <= tam) && (!percorreu)) {
        if (pai * 2 == tam)
            folhamaior = pai * 2;
        else if (v[pai * 2] > v[pai * 2 + 1])
            folhamaior = pai * 2;
        else
            folhamaior = pai * 2 + 1;

        if (v[pai] < v[folhamaior]) {
            temp = v[pai];
            v[pai] = v[folhamaior];
            v[folhamaior] = temp;
            pai = folhamaior;
            maxIndex = folhamaior; // Update the maxIndex
        } else
            percorreu = 1;

        (*steps)++; // Increase the step count

        // Print the array at each step and the current heap maximum
        for (k = 0; k <= tam; k++) {
            printf("%d ", v[k]);
        }
        printf("(Heap Max: %d)\n", v[maxIndex]);
    }
}

void MontaHeapMax(int* v, int tam, int* steps) {
    for (int i = (tam / 2); i >= 0; i--) {
        Heapfica(v, i, tam, steps);
    }
}

void HeapSort(int* v, int tam) {
    int i, k, temp, steps = 0;

    MontaHeapMax(v, tam, &steps);

    for (i = tam - 1; i >= 1; i--) {
        temp = v[0];
        v[0] = v[i];
        v[i] = temp;
        Heapfica(v, 0, i - 1, &steps);
    }

    printf("Total de passos: %d\n", steps);
}

int main() {
    int lista[1000];  // Increase the size of the array to support 1000 numbers
    int tam = sizeof(lista) / sizeof(lista[0]);

    // Initialize the array with 1000 random numbers (you can replace this with your data)
    for (int i = 0; i < tam; i++) {
        lista[i] = rand() % 1000;  // Random numbers between 0 and 999
    }

    printf("Initial array: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    HeapSort(lista, tam);

    printf("Sorted array: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}