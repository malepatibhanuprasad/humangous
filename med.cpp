#include<iostream>
using namespace std;
int main(){
        int n,i,a[100],temp=0,m;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    for(i=0;i<n;i++){
            temp=temp+a[i];
    }
    m=temp/n;
    cout<<m;
return 0;
}
