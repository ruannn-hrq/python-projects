#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Global variable to count steps
int steps = 0;

void QuickSort(int* v, int tam) {
    int j = tam, k;
    if (tam <= 1)
        return;
    else {
        int pivot = v[0];
        int a = 1;
        int b = tam - 1;
        do {
            while ((a < tam) && (v[a] <= pivot))
                a++;
            while (v[b] > pivot)
                b--;
            if (a < b) {
                int temp = v[a];
                v[a] = v[b];
                v[b] = temp;
                a++;
                b--;
            }
            for (k = 0; k < j; k++)
                printf("%d ", v[k]);
            printf("\tPivô: %d\n", pivot); // Print the pivot element
            steps++; // Increment the step counter
        } while (a <= b);

        v[0] = v[b];
        v[b] = pivot;
        QuickSort(v, b);
        QuickSort(&v[a], tam - a);

        for (k = 0; k < j; k++)
            printf("%d ", v[k]);
        printf("\tPivô: %d\n", pivot); // Print the pivot element
        steps++; // Increment the step counter
    }
}

int main() {
    int a[1000]; // Declare an array with 1000 elements

    // Initialize the array with random numbers between 1 and 1000
    srand(time(NULL));
    for (int i = 0; i < 1000; i++) {
        a[i] = rand() % 1000 + 1;
    }

    int n = sizeof(a) / sizeof(a[0]);
    printf("Antes de ordenar, os elementos são:  - \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    QuickSort(a, n);

    printf("Depois de ordenar, os elementos são: - \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("Número de passos: %d\n", steps);

    return 0;
}