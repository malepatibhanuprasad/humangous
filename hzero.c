#include<stdio.h>
int main(){
int n,m,i,j;
scanf("%d",&n);
int a[n],s=0,c,d;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if((a[i]+a[j])==0){
            c=i;
            d=j;
            break;
        }
        break;
    }
}
printf("%d %d",a[c],a[d]);
return 0;
}
