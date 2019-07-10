#include<stdio.h>
int main(){
    int a,coun=0;
    scanf("%d",&a);
    while(a!=0){
        a=a/10;
        coun++;
    }
    printf("%d",coun);
 return 0;
}
