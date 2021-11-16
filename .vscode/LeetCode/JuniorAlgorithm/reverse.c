#include<stdio.h>
#include<stdbool.h>
#include<windows.h>
#include<math.h>
int reverse(int a);

int main(){
    int a;

    scanf("%d",&a);
    printf("%d",reverse(a));

    system("pause");
    
    return 0;
}

int reverse(int a){
    int len=1;
    int a1=a;
    while(a1/10!=0){
        len++;
        a1/=10;
    }

    if(a/10!=0){
        return reverse(a%(int)pow(10,len-1))*10+a/pow(10,len-1);
    }else{
        return a;
    }
}

_Bool isPrime(int a){
    return false;
}