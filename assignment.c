#include <stdio.h>
int main ()
{
    int x;
    int y;
    printf("Enter the coordinates:-");
    scanf("%d\n",&x);
    scanf("%d",&y);
    int a = x*x;
    int b = y*y;
    int s = sqrt(a+b);
    printf("%d\n",s);
    if(s<=5){
        printf("Close");
    }
    else if(s>5&&s<=15){
        printf("Medium");
    }
    else{
        printf("Far");
    }
    return 0;
}