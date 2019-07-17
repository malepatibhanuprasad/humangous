#include<stdio.h>
int main(){
int n,m,i,j;
scanf("%d",&n);
scanf("%d",&m);
int a[n],b[m],s=0;
if(n<m)
    printf("NO");
else{
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<m;i++)
    scanf("%d",&b[i]);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(b[i]==a[j]){
            s=s+1;
        }
    }
}
if(s==m)
    printf("YES");
else
    printf("NO");
}
return 0;
}
