#include<stdio.h>
int main(){
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    int n = 3;
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
        sum += array[i][i];
    }
    printf("\n");
    printf("Tong cua cac phan tu tren duong cheo chinh la: %d", sum);
}

