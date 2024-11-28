#include <stdio.h>
int main() {
    int array[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int sum = 0;
    int n = 3;
    for (int i = 0; i < n; i++) {
        sum += array[0][i];
        sum += array[n-1][i];
    }
    for (int j = 1; j < n - 1; j++) {
        sum += array[j][0];
        sum += array[j][n-1];
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
}


