#include <stdio.h>
#include<string.h>
int main(){
char str[100];
int length;
int vowel =0;
int consonant =0;
length = strlen(str);
printf("enter the sentense ");
fgets(str, sizeof (str),stdin);
for(int i=0;str[i]!='\0';i++){
    char ch=str[i];
    if((ch>='a' && ch <='z') || (ch>='A' && ch<='Z')){
        if( ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u' || ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' ){
        vowel+=1;
        printf(" %c is vowel \n ", ch);
    }else{
        consonant +=1;
        printf("%c is consonant \n ",ch);
    }
} 
}
printf(" total vowels %d \n", vowel);
printf("total consonants %d", consonant);
return 0;
}