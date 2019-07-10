#include<stdio.h>
#include<string.h>
int main(){
char a[20],b[20];
gets(a);
gets(b);
int n1=strlen(a);
int n2=strlen(b);
char c[n1+n2-1];
int i,j,k=0;
for(i=0;i<n1;i++){
    if(a[i]!='\0'){
        c[i]=a[i];
    }
}
for(j=i;j<i+n2;j++){
    if(b[k]!='\0'){
        c[j]=b[k];
        k++;
    }
    }
printf("%s",c);
return 0;
}
