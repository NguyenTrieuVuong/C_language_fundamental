#include <stdio.h>
 
float NhapMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
 
float XuatMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}
float MaxElement(int a[], int n){
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}
 
float GetMaxPosition(int a[], int n){
    int maxValue = MaxElement(a, n);
    printf("\nVi tri cua phan tu lon nhat: ");
    for(int i = 0; i < n; i++){
        if(a[i] == maxValue){
            printf("%5d", i + 1);
        }
    }
}
 
int main(){
    int arr[MAX_SIZE];
 
    int n;
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_SIZE);

    NhapMang(arr, n);

    XuatMang(arr, n);
 
    GetMaxPosition(arr, n);
 
}
