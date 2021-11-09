int reverseNum(int n){
    int a=0;
    while(n>0){
        a*=10;
        a+=n%10;
        n/=10;
    }
    return a;
}