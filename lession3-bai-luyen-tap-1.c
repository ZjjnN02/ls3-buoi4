#include <stdio.h>

int main() {
    //bai 1
    /*
    int a, b;
    printf("\nNhap so nguyen a:");
    scanf("%d", &a);
    printf("\nNhap so nguyen b:");
    scanf("%d", &b);
    if(a > b){
        printf("\nso lon nhat la: %d", a);
        printf("\nso be nhat la: %d", b);
    } else {
        printf("\nso lon nhat la: %d", b);
        printf("\nso be nhat la: %d", a);
    }
    */

   //bai 2
   /*
   float x,y;
   printf("\nNhap hai so x:");
   scanf("%f", &x);
   printf("\nNhap hai so y:");
   scanf("%f", &y);

   if (y == 0){
    printf("\nco con cac chia dc, m bi ngu a");
   } else {
    printf("\n%f", x/y);
   }
   */
int k = 0;
while(1) {
    printf("\nhoc di");
    if(k % 3 == 0) {
        k = 0;
    }
    k++;
    if(k % 3 == 0) {
        break;
    }
}
    return 0;
}