#include<stdio.h>
void nhapmang(int a[], int &n)
{ printf("nhap so phan tu :" );
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { printf(" phan tu thu %d :",i);
    scanf("%d",&a[i]);
  }
}
int xuatmang(int a[],int n)
 {
  printf("mang da nhap \n");
  for(int i=0;i<n;i++)
    {
      printf(" %4d ",a[i]);
    }
 }

void chen(int a[],int n,int k)
{
 int x;
 printf("nhap so can chen:");
 scanf("%d",&x);
 for(int i=n;i>=k;i--)
 {
 a[i]=a[i-1];
 }
 a[k]=x;
 n++;
 xuatmang(a,n);
 
}

int main()
{
 int a[50],n,k;
 nhapmang(a,n);
 xuatmang(a,n);
 printf("nhap vi tri can chen:");
 scanf("%d",&k);
 chen(a,n,k);
 return 0;
}
