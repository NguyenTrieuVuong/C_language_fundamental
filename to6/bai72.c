#include<stdio.h>
#include<math.h>
void ptb2(float a, float b, float c )
{
	float d,x1,x2;
	d = pow(b,2) - (4*a*c);
	if(d>0){
		printf("phuong trinh co 2 nghiem phan biet: \n");
		
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		
		printf("x1=%.2f \n",x1);
		printf("x2=%.2f \n",x2);
	}
	else if(d==0){
		printf("phuong trinh co nghiem kep: \n");
		
		x1=x2=(-b)/(2*a);
		printf("x1=x2=%.2f",x1);
	}
	else if(d<0)
	{
		printf("phuong trinh vo nghiem");
	}
}
int main()
{
	float a,b,c;

 	do{
        printf("Nhap a (a!=0): ");
        scanf("%f",&a);
    }
    while(!a);
    	printf("Nhap b: ");
        scanf("%f",&b);
        printf("Nhap c: ");
        scanf("%f",&c);
	ptb2(a,b,c);
}
