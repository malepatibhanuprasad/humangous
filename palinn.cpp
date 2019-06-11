#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n,a,sum=0,rem;
cin>>n;
a=n;
while(n!=0){
    rem=n%10;
    sum=sum*10+rem;
    n=n/10;

}
if(a==sum){cout<<"yes";}
else cout<<"no";
return 0;
}
