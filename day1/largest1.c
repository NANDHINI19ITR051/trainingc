
#include<stdio.h>
int main(){
    int number1,number2;
    scanf("%d%d",&number1,&number2);
    if(number1>number2){
        printf("The largest number is %d\n",number1);
    }
    else{
        printf("The largest number is %d\n",number2);
    }
    printf("The largest number is %d",(number1>number2?number1:number2));
}