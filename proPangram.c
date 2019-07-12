#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int length,index,i,coun=0;
    gets(s);
    length=strlen(s);
    for(i=0;i<length;i++){
        if(s[i]>=65&&s[i]<=90){
            index=s[i]-65;
            a[index]=1;
        }
        if(s[i]>=97&&s[i]<=122){
            index=s[i]-97;
            a[index]=1;
        }
    }
    for(i=0;i<26;i++){
        if(a[i]==1){
                coun++;
        }
        else break;
    }
    if(coun==26) printf("yes");
    else printf("no");
    return 0;
}
