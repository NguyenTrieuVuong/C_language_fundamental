#include<stdio.h>
#include<math.h>
float nhapmang(int n, float a[50])
{
    int i;
    for(i=0; i<n; i++){
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }
    return 0;
}
float xuatmang(int n, float a[50])
{
    int i;
    for(i=0; i<n; i++){
        printf("%.2f \t",a[i]);
    }
    printf("\n");
    return 0;
}
float diachimang(int n, float a[50])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%p \t",a[i]);
	}
	printf("\n");
	return 0;
}
float sapxepmang(int n, int k, int tg, float a[50])
{
	int i;
	k=round(n/2);
	for(i=0; i<k; i++)
	{
		tg=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=tg;
	}
	return 0;
}	
int main()
{
    int i,n;
    float a[50];
    printf("nhap so phan tu mang: \n");
    scanf("%d",&n);
    nhapmang(n,a);
    xuatmang(n,a);
    printf("dia chi cac phan tu la: \n");
    diachimang(n,a);
    int k,tg;
    printf("mang sau sap xep lai: \n");
    sapxepmang(n,k,tg,a);
    xuatmang(n,a);
}
