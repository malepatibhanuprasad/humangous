#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,fac=0;
cin>>a;
for(int i=1;i<=a;i++){
    if(a%i==0)
        fac=fac+1;
}
if(fac==2){cout<<"yes";}
else cout<<"no";
return 0;
}
