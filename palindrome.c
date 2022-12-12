#include<stdio.h>
#include<conio.h>
void main()
{  int temp=0, n, remd;
    scanf("%d",&n);
    int p = n;
    while(n!=0){
        remd=n%10;
        n=n/10;
        temp=temp*10+remd;
    }
    if(p==temp)
    printf("Palindrom");
    else
    printf("Not");
}
