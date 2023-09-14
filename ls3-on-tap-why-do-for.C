#include <stdio.h>
#include <math.h>
#include <iostream>


int main(){
    
    // bai 1:
    /*
    int n;
    int i;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap so n:");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        S = S + i;
    }
    printf("\nTong 1 + 2 + 3 + ... + %d la %ld:", n, S);
    */

    // bai 2:
    /*
    int i, n;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n){
        S = S + i * i;
        i++;
    }
    printf("i = %d", i);
    printf("\n1^2 + 2^2 + ... + %d^2 la: %ld", n, S);

    getchar();
    */

    // bai 3:
    int n;
    float S = 0;
    do {
        cout << "Nhap so n:";
        cin >> n;
        if(n<0) {
            cout << "Nhap lai n (n>1): ";
        }
    } while(n < 1);
    for(int i = 1, i < n; i++)
    {
        S = S + 1.0 / i;
    }
    cout << "Ket qua cua bai toan S(n)= 1 + 1/2 + 1/3 + ... + 1/n la"<<s<<"\n";
    
    
    
    
    
    
    
    
    return 0;
}