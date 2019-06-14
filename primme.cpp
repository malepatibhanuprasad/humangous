#include<iostream>
using namespace std;
int main(){
int a,b,fac;
cin>>a;
cin>>b;
for(int j=a;j<b;j++){
        fac=1;
for(int i=2;i<=j-1;i++){              
    if(j%i==0){
        fac=0;
        break;}
}
if(fac==1){if(j!=1){cout<<j<<" ";}}
}
return 0;
}
}
