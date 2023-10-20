#include <stdio.h>
int main(){
    float a,b,cv,dt;
    printf("Nhap hai canh cua hinh chu nhat: ");
    scanf("%f%f", &a,&b);
    cv=(a+b)*2;
    dt=a*b;
    printf("Chu vi va dien tich hinh chu nhat lan luot = %.3f va %.3f ", cv,dt);
}
