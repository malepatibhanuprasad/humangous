#include<iostream>
#include<math.h>
using namespace std;
int main(){
int len=0,n,N,r,sum=0,c;
cin>>n;
c=n;
while(n!=0){n=n/10;len+=1;}
N=c;
while(N!=0){
    r=N%10;
    sum+=pow(r,len);
    N=N/10;
}
if(sum==c){cout<<"yes";}
else {cout<<"no";}
return 0;
}
