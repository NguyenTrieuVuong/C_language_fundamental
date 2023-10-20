#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char tsp[30];
	int gia;
	char nsx[30];
}sanpham;

int main()
{
	sanpham a[100],tg;
	int i,n,j;
	printf("nhap so luong san pham \n");
	scanf("%d%*c",&n);
	for(i=0;i<n;i++)
	{
		printf("nhap du lieu cua san pham %d: \n ",i+1);
		printf("ten sp: \n");
		gets(a[i].tsp);
		printf("gia sp: \n");
		scanf("%d%*c",&a[i].gia);
		printf("nha san xuat: \n");
		gets(a[i].nsx);
	}
	for(i=0;i<n-1;i++){
	    for(j=i+1;j<n;j++){
		    if(a[i].gia>a[j].gia){
		    	tg=a[i];
		    	a[i]=a[j];
		    	a[j]=tg;
		    }
	    }
	}
	printf("thong tin cua san pham \n");
	printf("ten sp \t gia sp \t nha san xuat \n");
	for(i=0;i<n;i++){
		printf("%s \t %d \t %s\n", a[i].tsp, a[i].gia, a[i].nsx);
	}
}