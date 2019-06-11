#include<iostream>
using namespace std;
int main(){
int a=0,n;
cin>>n;
while(n!=0){
    n=n/10;
    a++;
}
cout<<a;
return 0;
 }
