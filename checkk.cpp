#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "INPUT" << endl;
    cin>>a;
    if(a>0)
        cout<<"Positive\n";
    else if(a==0)
        cout<<"Zero\n";
    else
        cout<<"Negative\n";
    return 0;
}
