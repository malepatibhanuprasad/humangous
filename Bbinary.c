#include<stdio.h>
int main()
{
    int n,s;
    int i,cou=0;
    scanf("%d",&n);
    while(n!=0){
            s=n%10;
          n=n/10;
        if(s!=1&&s!=0){
            cou++;
        }
        else
            break;
    }
    if(cou!=0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
