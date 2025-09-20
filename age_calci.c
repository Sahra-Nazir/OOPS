// calculate age and state if the person is eligible for casting vote
#include<stdio.h>
int main(){
    int present_year;
    printf("enter the present year \n ");
    scanf("%d",&present_year);
    int birth_year;
    printf("enter the birth year of person \n");
    scanf("%d",&birth_year);
    int age=present_year - birth_year;
    printf("the age of person is %d : ",age);
if(age<18){
    printf("the person is not adult \n ");
    printf("the person is not eligible for voting ");
}
else if(age<=50)
{
      printf("the person is  adult \n");
printf("yup the person can cast the vote !");
}
else
printf("the person is senior citizen \n eligible for pension");
    return 0;
}