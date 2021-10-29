#include<iostream>

using namespace std;

int main(){
    //control the column
    int line;
    cin>>line;

    for(int i = 1;i<=line;i++){
        for(int j = 1;j<=line-i;j++) cout<<" ";
        for(int k = 1;k<=i*2-1;k++) cout<<"*";
        cout<<endl;
    }
    for(int i = line-1;i>=1;i--){
        for(int j = 1;j<=line-i;j++) cout<<" ";
        for(int k = 1;k<=i*2-1;k++) cout<<"*";
        cout<<endl;
    }

    return 0;
}