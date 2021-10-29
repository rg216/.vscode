#include <stdio.h>
#define N 100000;

int privotsort(int& a,int p,int r);

int main(){
    int a[N],a_size;
    scanf("%d",&a_size)
    for(int i = 0;i < a_size;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < a_size;i++){
        printf("%d",&a[i]);
    }

    return 0;
}
//pow math.h;
int privotsort(int& a[],int p,int r){
    int i = p,j = p;
}