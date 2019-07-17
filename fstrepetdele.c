#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int a[n],min=n+1;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            if(min>j)
                min=j;
        }
    }
}
if(min<=n)
    printf("%d",a[min]);
else
    printf("unique");
return 0;
}
