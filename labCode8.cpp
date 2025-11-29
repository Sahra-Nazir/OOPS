// calculate electricity bill as per units consumed
#include<stdio.h>
int main(){
  int units;
  float bill;
  int n;
  printf("enter the units consumed \n ");
  scanf("%d",&units);
  printf("choose 1 if consumption <=100 \n choose 2 is consumption is >100 but <200 \n choose 3 if consumption >200 \n");
  scanf("%d",&n);
  switch(n){
    case 1: 
    if(units<=100)
   printf("the bill amount is %f  ", bill=2*units);   // 2 Rs per unit
   break;
   case 2:
   if (units >100 || units<200)
   printf("the bill amount is %f  ",bill=2*100+2.5*(units-100));
   break;
   case 3:
   if (units>200)
   printf("the bill amount is %f  ", bill=2*100+2.5*100+3*(units-300));
   break;

}

    return 0;
}