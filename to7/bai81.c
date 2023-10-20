#include <stdio.h>
#include <math.h>

typedef struct
{
	int x, y;
} diem;

void nhap(diem N)
{
	printf("Nhap toa do cua diem %c: ",N);
	printf("Toa do x: ");
	scanf("%d", &N.x);
	printf("Toa do y: ");
	scanf("%d", &N.y);
}

double tinhKhoangCach(diem X, diem Y)
{
	double kc;
	kc = sqrt(pow((X.x - Y.x), 2) + pow((X.y - Y.y), 2));
	return kc;
}

int main()
{
	diem A, B;
	nhap(A);
	nhap(B);
	printf("diem a %d%d: \n",A.x,A.y);
	printf("diem b %d%d: \n",B.x,B.y);
	printf("Khoang cach giua A va B = %lf", tinhKhoangCach(A, B));
	return 0;
}
