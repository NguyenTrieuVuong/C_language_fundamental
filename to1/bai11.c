#include<stdio.h>
#include<math.h>  
int main()
{ 
   double x,ts,ms,a,s;
   int i,j;
   printf("nhap so x \n");
   scanf("%lf",&x);
   ts=1;
   ms=2;
   i=1;
   s=1;
   a=1;
   while(fabs(a)>0.00001)
   {
        j=pow((-1),i/2);
   	    ts=ts*pow(x,2);
   	    ms=ms*i*(i-1);
   	    a=j*ts/ms;
   	    s+=a;
   	    i+=2;
   }
   printf("so hang cuoi cung %d \n", i);
   printf("ket qua phep tinh: %lf \n", s);
   printf("ket qua ham cos(x) (%lf)=%lf",x,cos(x));
   return 0;
}

