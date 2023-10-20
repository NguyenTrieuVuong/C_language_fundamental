#include <stdio.h>
int main(){
	int i;
	for(i=0;i<36;i++){
		if(i*2+(36-i)*4==100){
			printf("So ga la %d, so cho la %d", i, (36-i));
			break;
		}
	}
}
