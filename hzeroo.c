#include<stdio.h>
int main(){
int n,m,i,j;
scanf("%d",&n);
int a[n],s=0,c,d,min=1000;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if((abs(a[i]+a[j]))<min){
            min=abs(a[i]+a[j]);
            c=i;
            d=j;
         }
    }
}
printf("%d %d",a[c],a[d]);
return 0;
}
