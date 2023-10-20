#include<stdio.h>
int main()
{
	float a,b,c,d,max,min;
	printf(" nhap cac so a b c d \n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	max=a;
	if(b>a)
	max=b;
    if(c>b)
	max=c;
    if(d>c)
	max=d;
	printf("max la: %.2f \n",max);
    min=a;
    if(b<a)
    min=b;
    if(c<b)
    min=c;
    if(d<c)
    min=d;
    printf("min la: %.2f \n",min);
    return 0;
}
