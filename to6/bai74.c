#include<stdio.h>
void nhapmang(int n, float a[50])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
}
void xuatmang(int n, float a[50])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%.2f \t",a[i]);
	}
}
void tongbinhphuong(int n, float a[50])
{
	int i;
	float tbp;
	for(i=0; i<n; i++){
		if(a[i]>0){
			tbp+=a[i]*a[i];
		}
	}
	printf("\n tong binh phuong = %.2f \n",tbp);
}
void sapxep(int n, float a[50])
{
	int i,j,tg;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j]){
					tg=a[i];
					a[i]=a[j];
					a[j]=tg;
			}
		}
	}	
}
int main()
{
	int i,n;
	float a[50];
	printf("nhap so phan tu mang \n");
	scanf("%d",&n);
	nhapmang(n,a);
	xuatmang(n,a);
	float tbp;
	tongbinhphuong(n,a);
	int tg,j;
	sapxep(n,a);
	printf("mang sau sap xep la \n");
	xuatmang(n,a);
}
