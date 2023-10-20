#include <stdio.h>

#define max 100

void NhapMaTran(int A[max][max], int n)

{	
	int i,j;

   		for(i = 0; i<n ; i++)
	
		for(j = 0; j<n ; j++)

   {

      printf("[%d][%d] =",i,j);

      scanf("%d", &A[i][j]);

   }

}

void XuatMaTran(int A[max][max], int n)

{
	int i,j;

   for(i = 0; i<n ; i++)

   {

      printf("\n");

      for(j = 0; j<n ; j++)

         printf("%d\t",A[i][j]);

   }

 

}

void Tich(int A[max][max], int B[max][max], int C[max][max], int n)

{

	int i,j,k;

   for(i = 0; i<n ; i++)

   for(k = 0; k<n ; k++)

   {

      C[i][k] = 0;

      for(j = 0; j<n ; j++)

         C[i][k] = C[i][k] + A[i][j]*B[j][k];

   }

}

void main()

{

   int A[max][max],B[max][max], C[max][max], n;

 

   printf("Nhap cap n= ");

   scanf("%d",&n);

 

   printf("Nhap vao ma tran A\n");

   NhapMaTran(A,n);

 

   printf("Nhap vao ma tran B\n");

   NhapMaTran(B,n);

 

   printf("Ma tran A vua nhap\n");

   XuatMaTran(A,n);

  

   printf("\nMa tran B vua nhap\n");

   XuatMaTran(B,n);

   printf("\nMa tran C=A*B\n");

   Tich(A,B,C,n);

   XuatMaTran(C,n);

}
