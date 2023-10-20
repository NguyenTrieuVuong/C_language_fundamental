#include<stdio.h>
typedef struct
{
	char hoten[30];
	int namsinh;
	int masinhvien;
}ths;

int main()
{
	ths a[20];
	int i,n;
	printf("nhap so luong sinh vien \n");
	scanf("%d%*c",&n);
	for(i=0;i<n;i++)
		{
			printf("nhap du lieu cua thi sinh thu %d \n: ",i+1);
			printf("ho ten: ");
			gets(a[i].hoten);
			printf("nam sinh: ");
			scanf("%d",&a[i].namsinh);
			printf("ma sinh vien: ");
			scanf("%d%*c",&a[i].masinhvien);
		}
		printf("thong tin cua thi sinh \n");
		printf("Ho ten \t Nam sinh \t Ma sinh vien \n");
		for(i=0;i<n;i++)
			printf("%s \t %d \t %d*%c\n", a[i].hoten, a[i].namsinh, a[i].masinhvien);
}
