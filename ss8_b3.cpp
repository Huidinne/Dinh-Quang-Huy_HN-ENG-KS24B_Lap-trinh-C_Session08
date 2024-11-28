#include<stdio.h>
int main() {
    int number;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &number);
    int array[number][number];
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", number, number);
    for(int i = 0; i < number; i++){
        for (int j = 0; j < number; j++){
            printf("Nhap phan tu tai [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Ma tran vuong:\n");
    for(int i = 0; i < number; i++){
        for (int j = 0; j < number; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

