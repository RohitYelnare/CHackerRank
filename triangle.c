#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	float p;
    triangle *tmp = malloc(n * sizeof(triangle));
    long int a[500];
    int i,j,k,tmp1,tmp2,tmp3,counter;
    for(i=0; i<n; i++){
        if (tr[i].a<(tr[i].b+tr[i].c) && tr[i].b<(tr[i].a+tr[i].c) && (tr[i].a+tr[i].b)>tr[i].c) {
            p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
            a[i]=p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);
        }
        else {
        a[i]=0;
        }
    }
    for(j=0; j<n; j++){
        for(i=0; i<n-1; i++){
            /*if (tr[i].a>(tr[i].b+tr[i].c) || tr[i].b>(tr[i].a+tr[i].c) || (tr[i].a+tr[i].b)<tr[i].c) {
                continue;
            }*/
            if(a[i]>a[i+1]){
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
                
                /*tmp1=tr[i].a;
                tmp2=tr[i].b;
                tmp3=tr[i].c;
                tr[i].a=tr[i+1].a;
                tr[i].b=tr[i+1].b;
                tr[i].c=tr[i+1].c;
                tr[i+1].a=tmp1;
                tr[i+1].b=tmp2;
                tr[i+1].c=tmp3;*/
                *tmp=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=*tmp;
            }
        }
    }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
