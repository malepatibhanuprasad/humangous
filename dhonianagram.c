#include<stdio.h>
#include<string.h>
int main(){
    char c[5];
    int i,coun=0;
    gets(c);
    for(i=0;i<5;i++){
            if(c[i]=='d'||c[i]=='h'||c[i]=='o'||c[i]=='n'||c[i]=='i'){
                ++coun;
                }
    }
    if(coun==5)printf("yes");
    else printf("no");
    return 0;
    }
