#include<stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
int a[n],s=0,flag=0;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        s=a[i]+a[j];
       for(k=j+1;k<n;k++){
        if(s==a[k]){
                flag=1;
           break;
        }
       }
        if(flag==1)
            printf("%d %d %d\n",a[i],a[j],a[k]);
            flag=0;
            s=0;
        }
    }
return 0;
}
