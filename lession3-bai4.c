#include <stdio.h>
int main(){
    int a1, a2, a3, a4;
    printf("\nNhap 4 so nguyen");
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    
    int max = (a1 > a2) ? a1 : a2;
    max = (max > a3) ? max : a3;
    max = (max > a4) ? max : a4;
    
    if(a1 == a2 && a2 == a3 && a3 == a4) {
        printf("\nKhong co gia tri lon nhat");
    } else {
        printf("\nGia tri lon nhat trong 4 so la: %d", max);
    }
    
return 0;
}


