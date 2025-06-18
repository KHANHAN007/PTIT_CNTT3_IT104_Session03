#include <stdio.h>
#include <stdlib.h>

void nhapMang(int **a, int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    *a= (int *)malloc(*n *sizeof(int));
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu cua mang thu %d: ", i+1);
        scanf("%d", &(*a)[i]);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
void printMenu() {
    printf("    ---MENU---  \n");
    printf("1. Nhap mang\n");
    printf("2. In mang\n");
    printf("3. Them phan tu\n");
    printf("4. Xoa phan tu\n");
    printf("5. Cap nhat phan tu\n");
    printf("\nNhap lua chon:  ");
}
int main() {
    int choie=-1, *a=NULL, n=0;
    while (choie!=0) {
        printMenu();
        scanf("%d",&choie);

        switch (choie) {
            case 1:
                nhapMang(&a, &n);
                break;
            case 2:
                printArray(a, n);
        }
    }
}