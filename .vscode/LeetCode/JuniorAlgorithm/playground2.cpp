#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x[3],y[3],dis;
    for(int i=0;i<=2;i++){
        scanf("%lf %lf",&x[i],&y[i]);
    }
    
    dis=fabs(sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]))+
             sqrt((x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]))+
             sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2])));

    printf("%.2lf",dis);
    
    return 0;
}