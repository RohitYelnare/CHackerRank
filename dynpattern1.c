#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int i,j,k,l,m,p,q,r;
    for (i=0; i<n; i++) {
        for (j=0; j<i; j++) {
            printf("%d ", n-j);
        }
        for(l=0; l<2*n-1-2*i; l++){
            printf("%d ", n-i);
        }
        for(k=i; k>0; k--){
            printf("%d ", n-k+1);
        }
        printf("\n");
    }
    for(m=1; m<n; m++){
    	for(p=0; p<n-m; p++){
			printf("%d ", n-p);
		}
		for(q=0; q<2*m-1; q++){
			printf("%d ", m+1);			
		}
		for(r=m+1; r<=n; r++){
			printf("%d ", r);			
		}
		printf("\n");
	}
    return 0;
}

