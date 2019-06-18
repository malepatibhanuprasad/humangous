#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
char a[20],b[20];
int i,ca=0,cb=0,la,lb;
gets(a);
gets(b);
la=strlen(a);
lb=strlen(b);
if(la>lb){printf("%s",a);}
else if(la<lb){printf("%s",b);}
else printf("%s",a);
return 0;
}
