#include<stdio.h>
#include<math.h>
int main(){
    int a=0,b1=0,i=0;
    int isok=1;
    char b[11],c[11];
    int dontfuckingprint=1;
    
    do{
        b[i]=getchar();
    }while(b[i++]!='\n');
    if(b[0]=='-'){
        b[i-1]='\0';
        printf("%s out of range",b);
        dontfuckingprint=0;
    } 
    else
        for(int j=i-2;j>=0;j--){
            a+=((b[j]-'0')*(int)pow(10,(double)i-2-j));
        }
        if(a>=1&&a<=10000){
            b1=a*a;
            i--;
            i--;
            while(i>=0){
                c[i]=b1%10+'0';
                b1/=10;
                if(c[i]==b[i]) i--;
                else{
                    printf("No");
                    isok=0;
                    break;
                }
            }
            if(i==-1) printf("Yes");
        }else{
            if (dontfuckingprint==1)
            {
                printf("%d out of range");
            }
            

        }

    return 0;
}