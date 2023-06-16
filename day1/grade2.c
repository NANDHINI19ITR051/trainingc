#include <stdio.h>

int main()
{
    // printf("Hello World");
    int n;
    scanf("%d",&n);
    if(n>=90&&n<=100){
        printf("Grace A");
    }
    else{
        if(n>=75&&n<=89){
            printf("Grade B");
        }
        else{
            if(n>=60&&n<=74){
                printf("Grade C");
            }
            else{
                if(n>=50&&n<=59){
                    printf("Grade D");
                }
                else{
                    printf("Grade F");
                }
            }
        }
    }
    return 0;
}