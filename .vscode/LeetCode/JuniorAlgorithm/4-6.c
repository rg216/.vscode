#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int b,c,d;
    for(b=0;b<=m;b++)
        for(c=0;c<=m;c++)
            for(d=0;d<m;d++)
                if(n-(2*b+3*c+4*d)+b+c+d==m) printf("%d %d %d\n",b,c,d);

//a+b+c+d==n

    return 0;
}

 bool judge(int n){
    int t=1;
    while (t<=n) { t*=10; }
    return (n*n)%t==n;
}