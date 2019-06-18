#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char s[100];
    int f;
    gets(s);
    scanf("%d",&f);
    while(f!=0){
        printf("%s\n",s);
        f--;
    }
return 0;
}
