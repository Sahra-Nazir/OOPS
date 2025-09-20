// smallest, largest and average among set of n numbers.
#include<stdio.h>
int main(){
   int arr[50];
   int size;
   printf("enter size of array \n ");
   scanf("%d",&size);
   for(int i=0;i<size;i++){
    printf("enter element %d :",i+1);
    scanf("%d",&arr[i]);
   }
   // largest
   int max=arr[0];
   for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
   // smallest
   printf("the largest number is %d \n ",max);
   int min=arr[0];
   for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
    }
   }
   printf("the smallest number is %d \n",min);

   // average
   int sum=0;
   int average;
   for(int i=0;i<size;i++){
  sum=sum+arr[i];
   }
printf("the average is : %d \n", sum/size);
   
   
    return 0;
}