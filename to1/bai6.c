#include<stdio.h>
#include<math.h>
main()
{
	int i,a,biendem;
	biendem=0;
	do
	{
		printf("nhap so a \n");
		scanf("%d",&a);
	}
	while(a<=1);
	for(i=2;i<a;i++)
	{if
	(a%i==0)
	biendem++;
	}
	if(biendem==0)
	printf("%d la so nguyen to",a);
	else
	printf("%d ko phai so nguyen to",a);
	return 0;
}
