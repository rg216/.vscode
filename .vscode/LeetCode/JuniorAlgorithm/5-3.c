#include<stdio.h>

int main(){
    //1 2 4 7 11 
    int i,side,ctr=1;
    scanf("%d",&side);
    for(int i=1;i<=side;i++){
        ctr+=i;
    }

    printf("%d",ctr);

    return 0;
}