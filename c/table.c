/*program to print table of a number*/
#include<stdio.h>
int main(){
    int i,n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        s=n*i;
        printf("%d * %d =%ld\n",n,i,s);
    }
    return 0;
}