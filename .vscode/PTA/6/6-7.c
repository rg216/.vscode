#include <stdio.h>

//判断一个数是否为完全数的函数
int        isPerfect(int);

//打印完全数的函数 
void    printPerfect(int);

int main()
{
    int i,a,b,count;

    scanf("%d%d",&a,&b);
    count = 0 ;//a,b两数间完全数的数量，初始化为0 
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //如果是完全数 
        {
            printPerfect(i) ;//打印该完全数 
            count ++ ;  //计数器加1 
        }        
    }
    printf("The total number is %d.\n",count);//输出a,b两数间完全数的数量 
    return 0 ;
}
void printPerfect(int n){
    int last;
    if(isPerfect(n)){
        printf("%d=",n);
        for(int i=2;i<=n;i++){
            if(n%i==0){
                last=n/i;
                break;
            }
        }
        for(int i=1;i<=n;i++){
        if(n%i==0)
            if(n!=i&&i!=last)printf("%d+",i);
            if(i==last)printf("%d\n",last);
        }
    }
}
int isPerfect(int n){
    int sum=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)sum+=i+n/i; 
    }
    if(sum==n&&sum!=1)return 1;
    else return 0;
}