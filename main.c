#include <stdio.h>

// Funktion til at bytte to tal i et array
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Funktion til at udføre Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Sidste i elementer er allerede sorteret, så vi skal kun gennemgå de ubehandlede elementer
        for (j = 0; j < n-i-1; j++) {
            // Hvis det nuværende element er større end det næste element, bytter vi dem
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Funktion til at udskrive et array
void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Eksempel på brug af Bubble Sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Originalt array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorteret array: \n");
    printArray(arr, n);
    return 0;
}
