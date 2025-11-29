#include<stdio.h>
#include<math.h>
// standard deviation
int main(){
int arr[50];
   int size;
   printf("enter size of array \n ");
   scanf("%d",&size);
   printf("enter data set \n");
   for(int i=0;i<size;i++){
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
   int min=arr[0];
   for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
int range =max-min;
printf("the range is : %d\n ",range);
int sum_sq=0;
 for(int i=0;i<size;i++){
sum_sq=sum_sq+arr[i]*arr[i];
 }
int standard_dev=sqrt((sum_sq/size)-range);
printf(" standard deviation : %d",standard_dev);

    return 0;
}
