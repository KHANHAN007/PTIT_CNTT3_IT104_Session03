#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

int main() {
    int n, max=INT_MIN;
    scanf("%d", &n);
    int *a= (int*) malloc(n*sizeof(int));
    for (int i=0;i<n;++i) {
        scanf("%d", a+i);
        if(a[i]>max) {
            max=a[i];
        }
    }
    printf("%d\n", max);
    free(a);
    return 0;
}
