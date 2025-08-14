#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    int b;
    for(b=1;b<=a;b=b+1){
        if(b%2==0){
            printf("%d ",b);
        }
    }
    printf("\nAre even number till %d",a);
    return 0 ;
}