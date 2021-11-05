#include<stdio.h>
#include<math.h>

int f(int m,int n);

int main(){
    int a,b,temp;
    int max_div,min_bei;
    scanf("%d %d",&a,&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    max_div=f(a,b);   
    for(int i=a;i<=a*b;i+=a){
        if(i%b==0){
            min_bei=i;
            break;
        }
    }
    printf("%d %d",max_div,min_bei);

    return 0;
}

int f(int m,int n){
    int rem;
    while(n>0){
        rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}