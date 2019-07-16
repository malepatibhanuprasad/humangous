#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j,k=0,a[n],b[n];
for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            b[k]=a[i];
            k++;
        }
    }
}
for(i=0;i<k;i++){
    for(j=i+1;j<k;j++){
        if(b[i]>b[j]){
            int tem;
        tem=b[i];
        b[i]=b[j];
        b[j]=tem;
        }
    }
}
for(i=0;i<k;i++){
    cout<<b[i]<<" ";
}
return 0;
}
