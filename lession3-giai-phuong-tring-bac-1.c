#include <stdio.h>

int main(){
  int a;
  int b;
  double nghiem;
  printf("\nNhap he so a = ");
  scanf("%d", &a);
  printf("\nNhap he so b = ");
  scanf("%d", &b);
  printf("Phuong trinh sau khi nhap: %dx + %d = 0",a,b);
  //dieu kien
  if(a == 0) {
    if(b == 0) {
      //TH 1:
      printf("\nPhuong trinh tren vo so nghiem\n");
    } else {
      //TH 2:  
      printf("\nPhuong trinh tren vo nghiem\n");
    }
  } 
  else {
      nghiem = (double)-b/a;
      printf("\nPhuong trinh tren co nghiem la: x = %0.2f\n",nghiem);
  }
    return 0;
}