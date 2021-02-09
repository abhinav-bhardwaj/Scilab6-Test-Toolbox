#include "transpose.c"

int main() {
    int m,n;
    printf("Enter no. of row : ");
    scanf("%d",&m);
    printf("Enter no. of column : ");
    scanf("%d",&n);
    int*a = (int*)malloc(m*n*sizeof(int));
    printf("Enter Matrix elements : \n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",(a + i*n + j));
        }
    }
    printf("Given Matrix : \n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d",*(a + i*n + j));
            printf(" ");
        }
        printf("\n");
    }
    int*t = (int*)malloc(n*m*sizeof(int));
    transpose(m,n,a,t);
    return 0;
}
