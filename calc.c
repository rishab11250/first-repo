#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    char c;
    scanf("%c",&c);
    switch (c){
        case'+':printf("%d",a+b);
        break;
        case'-':printf("%d",a-b);
        break;
        case'*':printf("%d",a*b);
        break;
        case'/':printf("%d",a/b);
        break;
        default:printf("Enter a valid input");
        break;
    }
    return 0;

}