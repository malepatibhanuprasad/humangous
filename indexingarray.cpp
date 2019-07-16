#include<iostream>
using namespace std;
int main(){
    int n,i,j,flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){cin>>a[i];}
    for(j=0;j<n;j++){
        if(a[j]==j){
            cout<<j<<" ";
        }
        else flag++;
    }
    if(flag==n){cout<<"-1";}
    return 0;
}
