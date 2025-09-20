#include<stdio.h>
#include<string.h>
int main(){
     // creating structure 

    typedef struct health{
        char name[50];
        int age;
        float weight;
        float height;
        int blood_points;
        float bmi;
    }health;

    health arr[2];
    printf("name of person \n age of person \n weight of person \n height of person \n blood points of person \n");
    for(int i=0;i<2;i++){
         scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%f",&arr[i].weight);
        scanf("%f",&arr[i].height);
        scanf("%d",&arr[i].blood_points);     
   }
    for(int i=0;i<2;i++){
         printf(" name :%s",arr[i].name);
        printf(" \n age :%d",arr[i].age);
        printf("\n weight :%f ",arr[i].weight);
        printf("\n height :%f ",arr[i].height);
        printf(" \n blood points:%d ",arr[i].blood_points);     
   }
for(int i=0;i<2;i++){
     printf(" \n bmi : %f \n",arr[i].bmi=arr[i].weight/(arr[i].height*arr[i].height));
 
      if(arr[i].bmi<18){
           printf("person is underweight");
      }
       else if(arr[i].bmi<24){
            printf("person is normal and healthy");
      }
       else {
            printf("person needs checkup") ; 
   }
}

    return 0;
} 