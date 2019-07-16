#include<stdio.h>
#include<string.h>
int main(){
char b,a[50];
int i,j,n;
gets(a);
n=strlen(a);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(a[i]==a[j]){
       b=a[j];
       }
}
}
printf("%c",b);
return 0;
}
