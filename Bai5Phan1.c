#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2,d;
    printf("Nhap lan luot x1,y1,x2,y2 cua cac toa do cua A(x1,y1) va B(x2,y2): ");
    scanf("%f%f%f%f", &x1,&y1,&x2,&y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Khoang cach = %.3f", d);
}
