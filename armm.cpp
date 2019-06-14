#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int l,u,Sum,t,r,\len ;
   cin>>l;
   cin>>u ;
      for(int num = l; num <= u; num++) {
      t = num;
      len = 0;
      while (t != 0) {
         len++;
         t = t/10;
      }
      t = num;
      Sum = 0;
      while (t != 0) {
         r = t%10;
         Sum = Sum + pow(r,len);
         t = t/10;
      }
      if (num == Sum)
         cout<<num<<" ";
   }
   return 0;
}
