#include<stdio.h>
#include<stdbool.h>
int main(){
    char a[20];
    int length=0;
    scanf("%s",a);
    while(a[length]!='\0'){
        length++;
    }

    length--;
    
    _Bool isH=true;
    for(int i=0;i<=length;i++){
        if(a[i]==a[length-i])continue;
        else{
            isH = false;
            break;
        }
    }
    
    (isH)?printf("Yes"):printf("No");
    
    return 0;
}