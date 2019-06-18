#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char s[100];
    int c=0,i;
    gets(s);             //to find numericals of sentenses
    for(i=0;s[i];i++){
    if(s[i]>=48&&s[i]<=57)
        c+=1;
}
    printf("%d",c);
return 0;
}
