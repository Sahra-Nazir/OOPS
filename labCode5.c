// display time cards of employees
#include<stdio.h>
int main(){
    struct employee{
        int empId;
        int hourlyWageRate;
        int hours;
    };
     struct employee detail[3];
     printf("enter details of 5 employees \n employee Id\n hourly wage rate \n hours worked per week \n");
     for (int i=0;i<3;i++){
        scanf("%d",&detail[i].empId);
        scanf("%d",&detail[i].hourlyWageRate);
        scanf("%d",&detail[i].hours);
     }printf("\n");
     for (int i=0;i<3;i++){
        printf("employee %d id : %d \n ",i+1,detail[i].empId);
        printf("employee %d hourly wage : %d \n",i+1,detail[i].hourlyWageRate);
        printf("employee %d hours worked per week : %d \n ",i+1,detail[i].hours);
     }
     printf("\n");
     float salary[3];
     for (int i=0;i<3;i++){
        salary[i]=detail[i].hours-(3.65/100);
    }
    for (int i=0;i<3;i++){
        printf("salary of employee %d is : %f \n",detail[i].empId,salary[i]);
    }
     
    return 0;
}