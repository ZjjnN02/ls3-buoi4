#include <stdio.h>

int main() {
    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);

    if(x % 7 == 0) {
        printf("\nX chia het cho 7");
    } else {
            if(x % 2 == 0) {
                printf("\nX la so chan");
            } else {
                printf("\nX la so le");
            }
    }

    return 0;
}
