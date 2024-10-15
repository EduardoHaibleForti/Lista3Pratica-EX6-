#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int temp, i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float calculateMedian(int arr[], int n) {
    bubbleSort(arr, n);
    if (n % 2 == 0) {

        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {

        return arr[n / 2];
    }
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float median = calculateMedian(arr, n);
    printf("A mediana é: %.2f\n", median);

    return 0;
}

