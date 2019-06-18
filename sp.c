#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char s[100];
    int a,c=0,i;
    gets(s);
    for(i=0;s[i];i++){
    if(s[i]==' ')
        c+=1;
}
    printf("%d",c);
return 0;
}
