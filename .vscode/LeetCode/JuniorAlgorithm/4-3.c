#include<stdio.h>

int main(){
    int n,m,temp,temp1,temp2;
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        temp2=0;
        temp1=i;
        temp=temp1/m;
        if(temp1!=0){
            while(temp1!=0){
                temp2+=(temp1%10)*(temp1%10);
                temp1/=10;
            }
            if(temp2 ==temp){
                printf("%d\n",i);
            }
        }
    }

    return 0;
}