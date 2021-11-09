int judgeTriangle(int a,int b,int c){
    double jde=0;
    int temp;
    if(a+b>c&&a+c>b&&b+c>a){
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c){
            temp=a;
            a=c;
            c=temp;
        }
        if(b>c){
            temp=b;
            b=c;
            c=temp;
        }
        jde=(double)(a*a+b*b-c*c)/2*a*b;
        
        if(a==b||a==c||b==c) 
            if(a==b&&a==c&&b==c) return 3;
            else return 2;
        if(fabs(jde)<=0.0001) return 1;
        else return 0;
    }else{
        return -1;
    }
}