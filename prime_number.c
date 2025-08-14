#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number which u want to check:- ");
    scanf("%d",&num);
    int c = 0;
    for(int a=2;a<=num/2;a++){
        if(num%a==0){
            c = 1;
            break;
        }
    }
    if(c==0){
        printf("%d is prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}