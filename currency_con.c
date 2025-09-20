#include<stdio.h>
int main(){
    float rupee;
    float dollar;
    int mode;
    printf("enter 1 for rupee to dollar conversion \n enter 2 for dollar to rupee conversion \n");
    scanf("%d",&mode);
    
    if(mode==1){
        printf("enter amount in Indian rupee \n");
        scanf("%f",&rupee);
        dollar=rupee/83;
        printf("the amount in Dollar will be %f ",dollar);
    }

    else{
        printf("enter amount in dollar \n ");
        scanf("%f",&dollar);
        rupee=dollar*83;
        printf("the amount in Indian rupee will be %f ",rupee);
    }
    return 0;
}