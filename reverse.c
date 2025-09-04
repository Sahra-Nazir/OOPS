#include<stdio.h>
int main(){
int num;
int lastDig;
int reversedNum=0;
printf("enter the number ");
scanf("%d",&num);
for(int i=num; lastDig>0; num=num/10){
    lastDig=num%10;
    reversedNum=reversedNum*10 + lastDig;
}
printf("the reversed number is %d\n ", reversedNum);
    return 0;
}

