#include<stdlib.h>
int **trans(int m,int n,int a[][n]) {
    int **t;
    t = malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++) {
        t[i] = malloc(sizeof(int*)*m);
    }
    for(int i=0;i<m;i++) {   
        for(int j=0;j<n;j++) {
            t[j][i] = a[i][j];
        }
    }
    return t;
}