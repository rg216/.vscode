#include<stdio.h>

void to_binary(int n);

int main(){
    int n;
    puts("Please input an integer");

    while(scanf("%d",&n)==1){
        puts("The binary of the integer is ");
        to_binary(n);
        putchar('\n');
        puts("Please input an integer");
    }

    return 0;
}

void to_binary(int n){
    int rem = n%8;
    if(n>=8) to_binary(n/8);
    printf("%d",rem);
}