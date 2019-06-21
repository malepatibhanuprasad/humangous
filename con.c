#include <stdio.h>
#include <stdlib.h>
int main(){
char a[50],b[50];
int i=0,j;
gets(a);
gets(b);
while(a[i]!='\0')i++;
for(j=0;b[j]!='\0';i++,j++){
    a[i]=b[j];
}
a[i]='\0';
printf("%s",a);
return 0;
}
