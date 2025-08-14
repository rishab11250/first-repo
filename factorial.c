#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of whose factorial u want to know:- ");
    scanf("%d",&a);
    int b;
    int fact = 1;
    for(b=1;b<=a;b=b+1){
        fact = fact * b;
    }
    printf("%d",fact);
    return 0;
}