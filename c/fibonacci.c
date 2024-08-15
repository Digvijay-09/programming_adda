#include<stdio.h>
int main(){
int n1=0,n2=1,n3,n,i;
printf("Enter number of elemnts:");
scanf("%d",&n);
printf("%d",n1);
printf("%d",n2);
for(i=2;i<=n-1;i++)
{
    n3=n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
   
}
return 0;
}

