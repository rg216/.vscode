#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(){

    double distance=0; 
    for(int n=1;n<=200;n++){
        distance+=1.0/pow(2.0,(double)n);
        printf("%f\n",distance);
    }
    system("pause");
    return 0;
}