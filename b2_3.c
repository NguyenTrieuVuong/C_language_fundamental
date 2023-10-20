#include<stdio.h>
#include<stdlib.h>
int main(){
int a[20],i,j,c;
float avg,sum=0,n;
printf("Nhap n: ");
scanf("%f", &n);
for(i=0;i<n;i++){
	printf("Nhap a[%d]: ", i);
	scanf("%d", &a[i]);
}
for(i=0;i<n;i++){
	printf("%d\t",a[i]);
	sum+=a[i];
}
avg = (sum/n);
printf("\nTong = %.0f\n",sum);
printf("TBC = %.4f\n",avg);
for(i=0;i<n-1;i++){
	for(j=i;j<n;j++){
		if(a[i]<a[j]){
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
}
printf("Mang sau khi sap xep giam dan la:\n");
for(i=0;i<n;i++){
	printf("%d\t",a[i]);
}
printf("\nGia tri lon nhat cua mang la: %d", a[0]);
	printf("\nGia tri nho nhat cua mang la: %d\n", a[i-1]);
}
