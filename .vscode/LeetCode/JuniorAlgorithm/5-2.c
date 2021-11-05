#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n%5!=1&&n%6!=5&&n%7!=6&&n%11!=10){
        n++;
    }
    printf("%d",n);
    return 0;
}