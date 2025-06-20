#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main(){
    int n,m;
    scanf("%d", &n);

    if (n<=0) {
        printf("So luong phan tu khong hop le");
        return -1;
    }
    int *a=(int *)malloc(n* sizeof(int));
    if (a == NULL) {
        printf("Cap phat bo nho that bai");
        return -1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", a+i);
    }
    scanf("%d", &m);
    if (m<=0) {
        printf("So luong phan tu them khong hop le\n");
    }
    a=(int *)realloc(a, (n+m)*sizeof(int));
    if (a == NULL) {
        printf("Cap phan bo nho that bai");
    }
    for (int i=n;i<n+m;++i) {
        scanf("%d", a+i);
    }
    printArray(a,n+m);
    free(a);
    return 0;
}
