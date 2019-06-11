#include<iostream>
using namespace std;
int main(){
int N,m,sum=0;
cin>>N;
cin>>m;
int a[N];
for(int i=0;i<N;i++){
    cin>>a[i];
}
for(int j=0;j<m;j++){
    sum=sum+a[j];
    }
    cout<<sum<<endl;
        return 0;
}
