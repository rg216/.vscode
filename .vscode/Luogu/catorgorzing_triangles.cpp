#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    while(a>b||a>c||b>c){
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        if(a>c){
            int temp=a;
            a=c;
            c=temp;
        }
        if(b>c){
            int temp=b;
            b=c;
            c=temp;
        }
    }
    if(a+b<c) cout<<"Not triangle";
    else{
        double max_angle_cos = (double)(a*a+b*b-c*c)/2*a*b; 
        if(max_angle_cos-0.0<0.00001&&max_angle_cos>-0.000001) cout<<"Right triangle"<<endl;
        else if(max_angle_cos>0) cout<<"Acute triangle"<<endl;
        else if(max_angle_cos<0) cout<<"Obtuse triangle"<<endl;
        if(a==b) cout<<"Isosceles triangle"<<endl;
        if(a==b&&b==c) cout<<"Equilateral triangle";
    }
    return 0;
}