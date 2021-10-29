#include<stdio.h>

int main(){
    char a[30];
    int i=0;
    while((a[i]=getchar())<='9'&&a[i]>='0'){
        i++;
    }
    if(a[i]!='0') 
        for(int j=i-1;j>=0;j--) putchar(a[j]);
    else fputs("The number cannot be changed.",stdout);
    
    return 0;
}