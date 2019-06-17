#include<iostream>
using namespace std;
int main(){
int a[10];
for(int i=0;i<10;i++){
    cin>>a[i];
}
int b=a[0];
for(int i=0;i<10;i++){
    if(b<a[i]){
        b=a[i];
    }
}
cout<<b;
return 0;
}
