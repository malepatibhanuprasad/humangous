#include<iostream>
using namespace std;
int main(){
int year;
cin>>year;
if(year%4==0)
    cout<<"yes";
else if(year%400==0)
    cout<<"yes";
else cout<<"no";
return 0;
}
