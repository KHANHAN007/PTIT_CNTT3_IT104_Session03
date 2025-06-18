#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int *a= (int*) malloc(n*sizeof(int));
    for (int i=0;i<n;++i) {
        scanf("%d", a+i);
    }
    printArray(a, n);
    free(a);
    return 0;
}
