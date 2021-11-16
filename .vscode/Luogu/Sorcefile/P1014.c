#include<stdio.h>

int main(){
    int n,ctr=1;
    scanf("%d",&n);

    while((1+ctr)*ctr/2<n){
        ctr++;
    }
    ctr--;
    int k=(1+ctr)*ctr/2;
    n-=k;
    if(ctr%2==0)
    printf("%d/%d",ctr+2-n,n);
    else 
    printf("%d/%d",n,ctr+2-n);

    return 0;
}