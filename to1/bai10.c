#include<stdio.h>
#include<math.h>
void hamexp(int i, double x)
{
	double ts,ms,a,kq;
	ts=1;
	ms=1;
	kq=1;
	a=1;
	i=1;
	while(a>0.00001){
		ts=ts*x;
		ms=ms*i;
		a=ts/ms;
		kq+=a;
		i++;
	}
	printf("\nSo hang cuoi cung: %d",i);
	printf("\nKet qua cua phep tinh: %lf",kq);
	printf("\nKet qua ham mu exp: (%lf)=%lf",x,exp(x));
}
void main()
{
	double x,ts,ms,a,kq;
	int i;
	printf("nhap so x \n");
	scanf("%lf",&x);
	hamexp(i,x);
}
