#include <stdio.h>
#include <stdlib.h>

int sumRow(int *a, int row, int col) {
    int sum = 0;
    for (int i = 0; i < col; i++) {
        sum += *(a + row * col + i);
    }
    return sum;
}

int main() {
    int row, col, k;
    scanf("%d %d", &row, &col);
    if (row <= 0 && col <= 0) {
        printf("So hang so cot khong hop le\n");
        return 1;
    } else if (row <= 0) {
        printf("So hang khong hop le\n");
        return 1;
    } else if (col <= 0) {
        printf("So cot khong hop le\n");
        return 1;
    }
    int *a = (int *) malloc(row * col * sizeof(int));
    if (a == NULL) {
        printf("Cap phat bo nho that bai!\n");
        return 1;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", a + i * col + j);
        }
    }
    scanf("%d", &k);
    if (k < 0 || k >= row) {
        printf("Hang tinh tong khong ton tai");
        return -1;
    }
    printf("%d", sumRow(a, k - 1, col));
    free(a);
    return 0;
}
