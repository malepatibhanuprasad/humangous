#include<iostream>
using namespace std;
int main(){
    int time,hour=0;
    cin>>time;
    if(time>=60){
            hour=time%60;
        time=time/60;
    }
    else {hour=time;
    time=0;33
    }
    cout<<time<<" "<<hour;
return 0;
}

