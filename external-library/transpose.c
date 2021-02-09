#include <stdio.h>
#include <stdlib.h>
#include "transpose.h"

int transpose(int m, int n, int*a, int*t) {
    //printf("Transposed Matrix : \n");
	for(int i=0;i<n;i++) {   
        for(int j=0;j<m;j++) {
            *(t + j*n + i) = *(a + i*m + j);
        }
    }
    return 0;
}
