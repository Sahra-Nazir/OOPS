#include<stdio.h>
// range of temperature
int main(){
   int arr[50];
   int size;
   printf("enter size of array \n ");
   scanf("%d",&size);
   printf("enter various temperaturs \n");
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
return 0;
}