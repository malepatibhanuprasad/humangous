#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=0,c;
    cin>>n;
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
 return 0;
}
