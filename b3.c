#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float x1,x2;
	//Tim nghiem thuc cua phuong trinh ax^2+bx+c=0
	printf("Nhap 3 he so a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		x1=-c/b;
		printf("Phuong trinh co nghiem x= %f\n",x1);
	}else{
		float delta=pow(b,2)-4*a*c;
		if(delta==0){
			x1=-b/2*a;
			printf("Phuong trinh co nghiem kep x1 = x2 = %f\n",x1);
		}
		else if(delta>0){
			x1=(-b+sqrt(delta))/2*a;
			x2=(-b-sqrt(delta))/2*a;
			printf("Phuong trinh co hai nghiem lan luot la %f va %f",x1,x2);
		}
		else{
			printf("Phuong trinh vo nghiem");
		}
	}
}
