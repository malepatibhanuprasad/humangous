#include<iostream>
using namespace std;
int main(){
    int n,fac=1;
    cin>>n;
    while(n!=0){
        fac=fac*n;
        n--;
    }
    cout<<fac;
return 0;}
