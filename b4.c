#include <stdio.h>
int main(){
	int a;
//	printf("Nhap a ");
//	scanf("%d",&a);
	do{
		printf("Nhap a");
		scanf("%d",&a);
	}while(a<0);
	printf("\nSo ban nhap la %d",a);
}
