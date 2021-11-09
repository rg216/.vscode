int getDigit(long long n){
    if(n<10) return 1;
    else return 1+getDigit(n/10);
}