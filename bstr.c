
#include <stdio.h>
#include <stdlib.h>
int main(){
char ch,cha,a[50],b[50];
int i=0,j=0;
while(ch!='\n'){
    scanf("%c",&ch);
    a[i]=ch;
    i++;
}
while(cha!='\n'){
    scanf("%c",&cha);
    b[j]=cha;
    j++;
}
if(i>j){printf("%s",a);}
else if(i<j){printf("%s",b);}
else {printf("%s",a);}
return 0;
}
