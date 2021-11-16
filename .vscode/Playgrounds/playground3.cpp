#include<iostream>

using namespace std;//cout cin

void exchange(int &p1,int &p2){
    int temp;
    temp=p1;
    p1=p2;
    p2=temp;
    cout<<p1<<p2;
}

int main(){
    int a=3,b=1;
    exchange(a,b);
    cout<<a<<b;
    system("pause");
    return 0;
}