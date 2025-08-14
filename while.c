#include<stdio.h>
int main()
{
    int a ;
    printf("Enter starting point");
    scanf("%d",&a);
    int z;
    printf("Enter ending point");
    scanf("%d",&z);
    if(a>=2){
        while(a<=z){
            int c =0;
            for(int b =2;b<=a/2;b++){
                if(a%b==0){
                    c=1;
                    break;
                }
            
            }
            if(c==0){
                printf("%d\n",a);
            }
        a++;
        }
    }
    else{
        printf("Enter starting point >=2");
    }
    
    return 0;
}