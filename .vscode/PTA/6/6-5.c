int mypow(int x,int n){
    int ans=1;
    while(n>0){
        ans*=x;
        n--;
    }
    return ans;
}