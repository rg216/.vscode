#include<stdio.h>
//This program used a excepting method to find those prime numbers within 1 to 100000
//copyright Mike ©2021

int main(){
    int prime[10001];//to storage whether it is prime number

    for(int i=1;i<=10000;i++) prime[i]=1;//initialization

    for(int i=2;i<=10000;i++){
        if(prime[i]){
            for(int j=i+i;j<=10000;j+=i){ //find all numbers that contains i
                prime[j]=0;
            }
        }
    }
    for(int i=1;i<=10000;i++){
        if(prime[i]==1)
        printf("%d\n",i);
    }

    return 0;
}