#include <stdio.h>
int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            printf("%d la so chinh phuong!\n", n);
            return 0;
        }
        ++i;
    }
    printf("%d khong phai so chinh phuong!\n", n);
}
 
