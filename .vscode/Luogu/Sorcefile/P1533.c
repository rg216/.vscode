#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<dos.h>

void reverse_print(char *s);

int main(){
    char s[30];
    int mid=0;
    char mid_ch;
    scanf("%s",s);
    size_t len = strlen(s);
    char a[20],b[20];

    for(int i;i<len;i++){
        if(s[i]=='.'||s[i]=='/'){
            mid=i;
            mid_ch=s[i];
        }
        if(mid==0){
            a[i]=s[i];
        }else{
            b[i-mid]=s[i+1];
        }
    }

    switch (mid){
    case 0:
        reverse_print(s);
        break;
    
    default:
        reverse_print(a);
        putchar(mid_ch);
        reverse_print(b);
        break;
    }
    return 0;
}

void reverse_print(char *s){
    int len = strlen(s);
    int isFrontZero;
    if(s[len-1]=='0') isFrontZero =1;
    else isFrontZero =0; 
    for(int i=len-1;i>=0;i--){
        if(isFrontZero==0)putchar(s[i]);
        if(isFrontZero==1&&s[i-1]!='0')isFrontZero=0;
    }
}

