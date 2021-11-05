#include<stdio.h>

int main(){
    int a=0;
    int* b= &a;

    *b=1;
    printf("%d",a);

    return 0;
}