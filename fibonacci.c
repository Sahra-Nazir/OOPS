#include<stdio.h>
int main(){
    int first=0;
    int second=1;
    int sum=0;
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
   sum =first+second;
    first=second;
    second=sum;
    }
    printf("the %d th fibo number is %d : ", i ,sum);
    return 0;
}