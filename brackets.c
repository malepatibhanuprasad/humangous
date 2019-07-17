#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    int c=0,d=0,i,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            c++;
        }
        else
        {
            d++;
        }
        }
        if(c==d)
        {
            printf("yes");
        }
        else{
            printf("no");
    }
    return 0;
    }
