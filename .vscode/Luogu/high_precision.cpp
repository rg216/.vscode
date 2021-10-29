#include<iostream>
#define N 500

using namespace std;

int i,a[N],b[N],num1[N],c[N],len_a,len_b;

void multiply(int *a,int *b);
void _plus(int *a,int *b);

int main(){

    
    for(int j=0;j<N;j++){
        b[j]=0;
        a[j]=0;
        c[j]=0;
        num1[j]=0;
    }
    cin>>i;
    num1[0]=1;
    _plus(a,num1);
    for(int k=1;k<=i;k++){
            for(int j=1;j<=k;j++){
            _plus(b,num1);
            multiply(a,b);
        }
        _plus(c,a);
    }
    for(int j=0;j<N;j++){
        cout<<c[j];
    }   

    return 0;
}

void multiply(int *a,int *b){
    int c[N];
    int index = 0;
    while(index<N){
        if(a[index]*b[index]>=10){
            c[index]=(a[index]*b[index])/10;
            c[index+1]=(a[index]*b[index])%10;
        } 
        if(a[index]*b[index]<10){
            c[index]=a[index]*b[index];
        }
        index++;
    }
    index = 0;
    while(index<N){
        a[index]=c[index];
        index++;
    }
}

void _plus(int *a,int *b){
    int index=0,c[N];
    while(index<N){
        if(a[index]+b[index]>=10){
                c[index]=(a[index]+b[index])/10;
                c[index+1]=(a[index]+b[index])%10;
            } 
        if(a[index]+b[index]<10){
            c[index]=a[index]+b[index];
        }
    }
    while(index<N){
        c[index]=a[index];
        index++;
    }
}