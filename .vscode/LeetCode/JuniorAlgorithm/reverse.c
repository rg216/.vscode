#include<stdio.h>
#include<stdbool.h>
#include<windows.h>

int reverse(int a);

int main(){
    int a;

    scanf("%d",&a);
    printf("%d",reverse(a));

    system("pause");
    
    return 0;
}

int reverse(int a){
    int b=0,de_1=1;

    while(de_1*10<=a){
    de_1*=10;
    }

    while(de_1>=1){
    b+=(a%10)*de_1;
    a/=10;
    de_1/=10;
    }

    return b;
}

_Bool isPrime(int a){
    return false;
}