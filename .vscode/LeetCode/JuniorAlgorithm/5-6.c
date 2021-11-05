#include<stdio.h>
#include<math.h>

double step(int a);

int main(){
    double x,ex=1.0,y;
    int ctr=1;
    scanf("%lf", &x);
    while(pow(x,ctr)/step(ctr)>=1E-8){
        y=pow(x,ctr)/step(ctr);
        ex+=pow(x,ctr)/step(ctr);
        ctr++;
    }
    printf("%.4lf",ex);

    return 0;
}

double step(int a){
    if(a==1)
        return (double)1;
    else 
        return (double)a*step(a-1);
}