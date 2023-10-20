#include <stdio.h>
int main(){
	int a,b,c,d,max,min;
	printf("Nhap 4 so a,b,c,d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max = (a>b)?a:b;
	max=(max>c)?max:c;
	max=(max>d)?max:d;
	min = (a<b)?a:b;
	min=(min<c)?min:c;
	min=(min<d)?min:d;
	if(a==b&&b==c&&c==d){
		printf("Khong co so nao lon nhat");
	}else{
		printf("So lon nhat la %d\n",max);
		printf("So nho nhat la %d",min);
	}
	return 0;
}
