#include<stdio.h>
#include<string.h>
int main(){
char a[20],b[20],c[20],t;
gets(a);
gets(b);
for(int i=0;i<20;i++){
    if(a[i]!=b[i]){
        break;
    }
    else c[i]=a[i];
}
printf("%s",c);
return 0;
}
