#include <stdio.h>
int main(){
    float a,b,h,dt;
    printf("Nhap hai canh va chieu cao cua hinh chu nhat: ");
    scanf("%f%f%f", &a,&b,&h);
    dt=(a+b)*h/2;
    printf("Dien tich hinh thang = %.3f", dt);
}
