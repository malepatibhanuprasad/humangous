#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char s[100];
    int c=0,special=0,i;
    gets(s);             //to find numericals of sentenses
    for(i=0;s[i];i++){
    if((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=91)||s[i]>=97&&s[i]<=124){c+=1;}
    else {special+=1;}
}
    printf("%d",special);
return 0;
}
