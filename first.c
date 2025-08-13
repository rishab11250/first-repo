#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a >= 'A' && a <= 'Z'){
        printf("Upper case");
    }
    else if(a>='a'&&a<='z'){
        printf("Lower case");
    }
    else{
        printf("Not a alphabet");
    }
    return 0;
}