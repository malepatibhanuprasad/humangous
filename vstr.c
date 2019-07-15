#include<stdio.h>
#include<string.h>
int main(){
char a[20];
int i,j=0;
gets(a);
int n1=strlen(a);
char b[n1];
for(i=0;i<n1;i++){
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'){
            b[j]=a[i];
            j++;
    }
}
printf("%s",strrev(b));
return 0;
}
