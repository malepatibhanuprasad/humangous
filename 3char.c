#include<stdio.h>
#include<string.h>
int main(){
char a[100];
int i,j,n;
gets(a);
n=strlen(a);
char b[n];
for(i=0;a[i]!='\0';i=i+3){
    printf("%c",a[i]);
}
return 0;
}
