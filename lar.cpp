#include<iostream>
using namespace std;
int main(){
int n,a[n];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int t=a[0];
for(int i=0;i<n;i++){
    if(a[i]>t)
        t=a[i];
 }
cout<<t;
return 0;
}
