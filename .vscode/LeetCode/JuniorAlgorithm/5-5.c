#include<stdio.h>
#include<math.h>
int main(){
    char a[20];
    int b=0;
    int ans=0;
    while((a[b]=getchar())!='\n'){
        b++;
    }
    b-=1;
    int c=b;
    while(c>=0){
        ans+=pow(2,b-c)*(a[b]-'0');
        c--;
    }
    exp()
    printf("%d",ans);
    
    return 0;
}

double step(int a){
    if(a=2)
        return 1;
    else
        return a*step(a-1);
}