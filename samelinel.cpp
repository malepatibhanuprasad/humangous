#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    if(a==c)
        if(c==e)
           cout<<"yes";
        else
            cout<<"no";
    else
    {
        if(b==d)
            if(d==f)
               cout<<"yes";
            else
                cout<<"no";
        else
            cout<<"no";
    }
    return 0;
}
