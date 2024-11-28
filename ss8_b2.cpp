#include<stdio.h>
int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int a;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &a);
    int exist = 0;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++){
        if(array[i] == a){
            printf("Vi tri phan tu trong mang la %d.\n", i);
            exist = 1;
            break;
        }
    }
    if(exist==0){
        printf("Phan tu khong ton tai trong mang.\n");
    }
}

