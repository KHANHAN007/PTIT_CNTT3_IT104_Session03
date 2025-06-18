#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maxArr(int a[], int row, int col) {
    int max = INT_MIN;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (a[i * col + j] > max) {
                max = a[i * col + j];
            }
        }
    }
    return max;
}

int minArr(int a[], int row, int col) {
    int min = INT_MAX;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (a[i * col + j] < min) {
                min = a[i * col + j];
            }
        }
    }
    return min;
}

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    if (row<=0 && col<=0) {
        printf("So hang so cot khong hop le");
        return 1;
    }
    else if (row<=0) {
        printf("So hang khong hop le");
        return 1;
    }
    else if (col<=0) {
        printf("So cot khong hop le");
        return 1;
    }
    int *a = (int *) malloc(sizeof(int) * row * col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i * col + j]);
        }
    }

    printf("Max: %d\n", maxArr(a, row, col));
    printf("Min: %d", minArr(a, row, col));
    free(a);
    return 0;
}
