#include<stdio.h>
// temperatures 
int main(){
int arr[100];
   int size;
   printf("enter size of array \n ");
   scanf("%d",&size);
   printf("enter various temperatures\n");
   for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }

   int pleas=0;
for(int i=0;i<size;i++){
     if(arr[i]>=60 && arr[i]<80){
pleas=pleas+i;
    }
   }
   printf("pleasant days : %d \n",pleas);
    
   int hot=0;
   for(int i=0;i<size;i++){
    if(arr[i]>=85 ){
        hot=hot+i;
    }
}
    printf("hot days are %d\n",hot);
    

    return 0;
}