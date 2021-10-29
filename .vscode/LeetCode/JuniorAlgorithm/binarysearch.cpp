#include <stdio.h>

int binarysearch(int *a,int tag,int p,int r);

int main(){
    int lengh;
    int a[100000];

    scanf("%d",&lengh);
    int tag;

    for(int i = 0;i < lengh;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&tag);

    printf("%d",binarysearch(a,tag,0,lengh-1));

    return 0;
}

int binarysearch(int *a,int tag,int p,int r){
    int q = (p + r)/2;
    if(p>=r){
        return EOF;
    }
    if(a[q]>tag){
        return binarysearch(a,tag,p,q);
    }else if(a[q]<tag){
        return binarysearch(a,tag,q+1,r);
    }else if(a[q]==tag){
        return q+1;
    }
    return EOF;
}   