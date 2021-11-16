#include<stdio.h>
#include<math.h>

double msin(double x);

int main(){
    double a;
    scanf("%lf",&a);
    printf("%.12lf",msin(a));
    printf("\n%.12lf",sin(a));
}

double msin(double x){
    double n=1,m=1;
    double fx=0;
    double x_2=x*x;
    int ctr=1;
    while(fabs((double)m*x/n)>1E-10){
        fx+=x*m/n;
        x*=x_2;
        m*=-1;
        n*=(ctr+1)*(ctr+2);
        ctr++;
        ctr++;
    }
    return fx;
}


