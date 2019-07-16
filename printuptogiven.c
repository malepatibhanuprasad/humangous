#include<stdio.h>
int main()
{
    char s[50];
    int i,n;
    scanf("%s",s);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
