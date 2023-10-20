#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	FILE *f,*g;
	int *a,i,j,n,tg;
	if((f=fopen("ma.txt","w"))==NULL){
		printf("Khong the mo file ma.txt!\n");
		exit(0);
	}
	if((g=fopen("mb.txt","w"))==NULL){
		printf("Khong the mo file mb.txt!\n");
		exit(0);
	}
	a=(int*)malloc(n*sizeof(int));
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++){
		fprintf(f,"%d \t %d\n",i,a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	for(i=0;i<n;i++){
		fprintf(g,"%d \t %d\n",i,a[i]);
	}
	for(i=0;i<n;i++){
		fscanf(g,"%d \t %d\n",&i,&a[i]);
		printf("%d \t %d\n",i,a[i]);
	}
	fclose(f);
	fclose(g);
	free(a);
	
}
