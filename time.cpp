#include<iostream>
using namespace std;
int main(){
    int time,hour=0;
    cin>>time;
    while(time>=60){
            hour=time%60;
        time=time/60;
    }
    cout<<time<<" "<<hour;
return 0;
}
