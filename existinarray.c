#include<stdio.h>
#include<string.h>
int main(){
    int a[30],cn=0,n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {
    if(a[i]==k)
    {
        cn++;
    }}
    if(cn>0)
    {
        printf("Yes");
    }
    else{
        printf("No");
        }

return 0;
    }
