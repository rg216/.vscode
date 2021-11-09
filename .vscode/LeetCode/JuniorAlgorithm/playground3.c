#include<stdio.h>

void change_second(int *arr_ptr);

int main(){
    int a[10]={0};
    int *ptr_a=a;
    printf("%p %p\n",a,ptr_a);
    change_second(a);
    for(int i=0;i<=sizeof(a)/sizeof(int)-1;i++){
        printf("%d %p\n",a[i],&a[i]);
    }
    return 0;
}

void change_second(int *arr_ptr){
    arr_ptr[1]=1;
}