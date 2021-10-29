//Mike 2021.10
#include<stdio.h>
#include<stdbool.h>
#include<windows.h>
//This program is for testing whether the number is prime or not.
//It now can judge multiple numbers now,compared with last version.
int main(){
    int num=0;
    while(scanf("%d",&num)){//check wether the input legal
        int isPrime=1;//flag
        for(int div=2;(div*div)<=num;div++){//judging 
            if(num%div==0){
                isPrime=0;
                if(num/div!=div){
                    printf("%d can be divided by %d and %d.\n",num,div,num/div);
                }else{
                    printf("%d can be divided by %d.\n",num,div);
                }//make sure that there won't be cases like "36 can be divided by 6 and 6.".
            }
        }
        if(isPrime) 
            printf("%d is a prime number.\n");//if all those div can't divided it,it must be a prime number.
    }
    fputs("bye!",stdout);//user friendly

    system("pause");

    return 0;
}