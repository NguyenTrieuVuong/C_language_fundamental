#include<stdio.h>
float nhapmang(int n, float a[50])
{
	int i; 
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	return 0;
}
float xuatmang1(int n, float a[50])
{
	int i;
	for(i=0;i<n;i++){
			printf("%.2f \t",a[i]);
		}
	printf("\n");
	return 0;	
	}

float xuatmang2(int n, int p, float a[50])
{
	int i;
	for(i=0; i<n; i++){
        if(i!=p-1){
        printf("%.2f \t",a[i]);
        }
 	}
	return 0;
}
float xuatmang3(int n, int p, int val, float a[50])
{
	int i;
	for(i=n;i>p;i--)
	{
		a[i]=a[i-2];
	}
	a[p]=val;
		++n;
	for(i=0; i<n; i++){
		printf("%.2f \t",a[i]);
	}
	return 0;
}
int main()
{
	int i,n;
	float a[50];
	printf("nhap so phan tu mang \n");
	scanf("%d",&n);
	nhapmang(n,a);
	xuatmang1(n,a);
	int p;
	printf("nhap vi tri can xoa \n");
	scanf("%d",&p);
	printf("mang sau khi xoa: \n");
	xuatmang2(n,p,a);
	printf("\n");
	int val;
	printf("nhap so can them \n");
	scanf("%d",val);
	printf("nhap vi tri muon them \n");
	scanf("%d",p);
	printf("mang sau khi them: \n");
	xuatmang3(n,p,val,a);
}
