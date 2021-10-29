#include <iostream>
#define N 10000

int a1[N],tmp[N];

using namespace std;

void merge(int lower,int mid,int higher){
    int i = lower;
    int j = mid+1;
    int k = lower;
    while(i<=mid&&j<=higher){
        if(a1[i]<a1[j]) 
            tmp[k++]=a1[i++];
        else 
            tmp[k++]=a1[j++];
    }
    while(i<=mid){
        tmp[k++]=a1[i++];
    }
    while(j<=higher){
        tmp[k++]=a1[j++];
    }
    for(int p = lower;p <= higher;p++) a1[p] = tmp[p]; 
}

void mergesort(int a,int b){
    if(a>=b) return;
    int mid = (a+b)/2;
    mergesort(a,mid);
    mergesort(mid+1,b);
    merge(a,mid,b);
}

int main(){
    int n;

    cin>>n;

    for(int i = 0;i < n;i++){
        cin>>a1[i];
    }

    mergesort(0,n-1);
    for(int i = 0;i < n;i++){
        cout<<tmp[i]<<" ";
    }

    return 0;
}