#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    int b[100],temp,s=0;
    cin>>n;
    for(i=0;i<n;i++){cin>>b[i];}
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(b[i]<b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
            s=s*10+b[i];
    }
    cout<<s;
return 0;
}
