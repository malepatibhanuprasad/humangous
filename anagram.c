#include<stdio.h>
#include<string.h>
int main(){
    char s[5]={'d','h','o','n','i'};
    char c[5];
    int i,j,coun=0;
    gets(c);
    for(i=0;i<5;i++){
            for(j=0;j<5;j++){
            if(s[i]==c[j]){
                ++coun;
                }
          }
    }
    if(coun==4)printf("yes");
    else printf("no");
    return 0;
    }
