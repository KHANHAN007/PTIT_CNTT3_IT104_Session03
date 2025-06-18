#include<stdio.h>
#include<stdlib.h>

int averageEven(int a[], int n) {
    int sum=0, count=0;
    for (int i=0;i<n;++i) {
        if (a[i]%2==0) {
            sum+=a[i];
            count++;
        }
    }
    return sum/count;
}
int main() {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
        return 1;
    }
    int *a= (int*) malloc(n*sizeof(int));
    for (int i=0;i<n;++i) {
        scanf("%d,", a+i);
    }
    printf("%d", averageEven(a, n));
    free(a);
    return 0;
}
