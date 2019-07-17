#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0,j=1;i<=n;i=i+2,j=j+2){
        if((a[i]%2)!=0){
            printf("%d ",a[i]);
        }
        if(j==n){ break;}
        else{
        if((a[j]%2)==0){
        printf("%d ",a[j]);
       }
        }
}
return 0;
}
