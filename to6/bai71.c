#include<stdio.h>
void average(int x, int y, int z, float tbc)
{
	tbc=(x+y+z)/3;
	printf("%.2f",tbc);
}
int main()
{
	int x,y,z;
	printf("nhap 3 so x,y,z \n");
	scanf("%d%d%d",&x,&y,&z);
	float tbc;
	printf("tbc la: ");
	average(x,y,z,tbc);
}
