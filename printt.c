#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char s[100];
    int n;
    gets(s);
    scanf("%d",&n);
    while(n!=0){
        printf("%s\n",s);
        n--;
    }
return 0;
}
