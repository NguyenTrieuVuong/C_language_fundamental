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
 {for(int i=0;i<n;i++)
   {
     printf("%d \t",a[i]);
   }
 }
void gop(int a[],int n,int b[],int m,int c[],int &p)
{
 p=n+m; 
 for(int i=0;i<p;i++)
  {
   if(i<n) 
     c[i]=a[i];
   else c[i]=b[i-n];  
  }
}
int main()
{
 int a[50],b[50],c[100],n,m,p;
 nhapmang(a,n);
 nhapmang(b,m);
 gop(a,n,b,m,c,p);
 xuatmang(c,p);
 return 0;
}
