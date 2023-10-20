#include<stdio.h>
int main()
{
	int i,n,f0=0,f1=1,f;
	printf("nhap so phan tu day fibonacci \n");
	scanf("%d",&n);
	printf("day fibo la: ");
	for(i=2;i<n;i++)
	{
		f=f0+f1;
		f0=f1;
		f1=f;
		printf("%d \t",f);
	}
	printf("\n");
}

