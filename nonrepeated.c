#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int a[n],s,c=0;
s=(n*(n-1))*0.5;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            c=c+j+i;
        }
    }
}
printf("%d",a[s-c]);
return 0;
}
