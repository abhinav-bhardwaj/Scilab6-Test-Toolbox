#include "trans.c"
#include <stdio.h>

int main() {
    int m,n;
    printf("Enter no. of row : ");
    scanf("%d",&m);
    printf("Enter no. of column : ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter Matrix elements : \n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Given Matrix : \n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    int **tr;
    tr = trans(m,n,a);
    printf("Transpose Matrix : \n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d",tr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}