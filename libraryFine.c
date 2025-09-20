#include<stdio.h>
int main(){
    int days;
    float fine;
    printf("enter the number of days exceeding the due date \n");
    scanf("%d",&days);
     
    if ( days<=5)
    printf("the fine amount will be : %f", fine=50);  // Rs 50 for 5 days

   else if(days<10 && days>5)
    printf("the fine amount will be : %f",fine =50+20*(days-5));  //Rs 50 for first 5 days then 20 per day

    else
    printf("the bill amount will be  : %f", fine =50+20*(days-10)+100);
    return 0;
}