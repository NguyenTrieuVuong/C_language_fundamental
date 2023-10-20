#include<stdio.h>
#include<stdlib.h>
int main(){
int a[20],n,i;
printf("Nhap n: ");
scanf("%d", &n);
for(i=0;i<n;i++){
	printf("Nhap a[%d]: ", i);
	scanf("%d", &a[i]);
}
for(i=0;i<n;i++){
	printf("%d\t",a[i]);
}
}
