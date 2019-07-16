#include<iostream>
using namespace std;
int main(){
    int n,i,j,a[100],temp,sum=0;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
            sum=sum*10+a[i];
    }
    cout<<sum;
return 0;
}
