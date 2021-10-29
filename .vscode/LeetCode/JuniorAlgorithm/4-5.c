#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    int a,b,c;
    for(a=0;2*a<=n;a++)
        for(b=0;4*b+2*a<=n;a++)
            for(c=0;c*6+4*b+2*a<=n;c++)
                if(2*a+4*b+6*c==m&&a+b+c==n) printf("%d %d %d\n",a,b,c);
    
    return 0;
}