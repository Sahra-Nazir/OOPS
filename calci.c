// calculator using switch 
#include<stdio.h>
int main(){
int a,b;
printf("enter the value of first number :");
scanf("%d",&a);
prirntf("Enter value of second number :");
scanf("%d",&b);
printf("choose 1 for addition \n choose 2 for subtraction \n choose 3 for multiplication\n choose 4 for division \n ");
int choice;
scanf("%d", &choice);

switch(choice){
case 1:
printf("addition of two numbers is : %d", a+b);
break;
case 2:
printf("subtraction of two numbers is : %d", a-b);
break;
case 3:
printf("multiplicaton  of two numbers is : %d", a*b);
break;
case 4:
printf("division of two numbers is : %d", a/b);
break;
default:
printf("invalid operation");
break;
}
    return 0;
}