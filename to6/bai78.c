#include<stdio.h>

int Giaithua(int n)

{

	int s=1;
    
		if(n == 0)

        	return 1;

    int i;

        for(i=1;i<=n;i++){

            s*=i;
		}
            return s;

}

int main()
{

    int n;
	do
	{
       	printf("Nhap n = ");
        scanf("%d",&n);

    }
    while(n<0);

    	printf("N! = %d", Giaithua(n));
}
