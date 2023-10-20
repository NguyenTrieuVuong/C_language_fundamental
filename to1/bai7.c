#include <stdio.h>

#include <math.h>

int main() {

    int n,a;

    printf("Nhap vao so nguyen duong: ");

    scanf("%d", &n);

    if(n>0)

    {

                a=sqrt(n);

                if((a*a)==n)

                         printf("So ban da nhap vao la so chinh phuong");

                else

                        printf("So ban da nhap vao ko phai la so chinh phuong");

            }

}
