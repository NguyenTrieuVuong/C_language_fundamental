#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	FILE *f;
	float x,y;
	if((f=fopen("data.txt","w"))==NULL){
		printf("Khong the mo file!.\n");
		exit(0);
	}
	for(x=-M_PI;x<=M_PI;x+=2*M_PI/100){
		y=sin(x);
		fprintf(f,"%.2f \t %.2f\n",x,y);
		//printf("%.2f \t %.2f\n",x,y);
	}
	fclose(f);
	f=fopen("data.txt","r");
	for(x=-M_PI;x<=M_PI;x+=2*M_PI/100)
	{
		y=sin(x);
		fscanf(f,"%.3f \t %.3f",&x,&y); 
		printf("%.3f \t %.3f \n",x,y);
	}
	fclose(f);
}
