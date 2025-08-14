#include<stdio.h>
int main()
{
    float a;
    float b;
    char s;
    printf("Enter the first number:-");
    scanf("%f",&a);
    printf("Enter the second number:-");
    scanf("%f",&b);
    printf("Write the function u wanna perform:- ");
    scanf("\n%c",&s);
    if(s =='+'){
        float ad = a+b;
        printf("The addition of both number is %f",ad);
    }
    else if(s == '-'){
        float sub = a-b;
        printf("The subtraction of both number is %f ",sub);
    }
    else if(s=='*'){
        float mul = a*b;
        printf("The multiplication of both number is %f ",mul);
    }
    else if(s=='/'){
        if (b == 0){
            printf("Division by zero is not allowed");
            return 1; // Exit with error code
        }
        else{
            float div = a/b;
            printf("The divison of both the number is %f",div );
        }
    }
    else{
        printf("Invalid input");
    }
    return 0;
}