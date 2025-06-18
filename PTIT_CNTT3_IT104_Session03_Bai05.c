#include <stdio.h>
#include <stdlib.h>

int sumDiagonal(int *matrix, int row, int col) {
    int sum = 0;
    int len = (row < col) ? row : col;
    for (int i = 0; i < len; i++) {
        sum += matrix[i * col + i];
    }
    return sum;
}
int sumSecondaryDiagonal(int *matrix, int row, int col) {
    if (row != col) {
        printf("Khong ton tai duong cheo phu.\n");
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < row; i++) {
        sum += matrix[i * col + (col - i - 1)];
    }
    return sum;
}
int main() {
    int row, col;
    printf("Nhap so hang va cot: ");
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

    int *a = (int *) malloc(sizeof(int) * row * col);
    if (a == NULL) {
        printf("Cap phat bo nho that bai!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i * col + j]);
        }
    }

        printf("Tong duong cheo chinh: %d\n", sumDiagonal(a, row,col));
    if (row == col) {
        printf("Tong duong cheo phu: %d\n", sumSecondaryDiagonal(a, row, col));
    } else {
        printf("Khong ton tai duong cheo (ma tran khong vuong).\n");
    }
    free(a);
    return 0;
}
