#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
    if(a[i]>a[j]){
        int tem;
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
    }
            }
    }
    cout<<a[n-1]<<" "<<a[0];
    return 0;
}
