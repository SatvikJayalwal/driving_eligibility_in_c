#include<stdio.h>
#include<conio.h>
int main(){
    int age;char name1[30],name2[30];
    printf("\nThis program desides if user is eligible to drive or not");
    printf("\nEnter first name : ");
    scanf("%s",&name1);
    printf("Enter surname name : ");
    scanf("%s",&name2);
    printf("\nEnter age for driving licence : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n%s %s is eligible to get the driving licence and drive",&name1,&name2);    
    }   
    else
    {
        printf("\n%s %s is not eligible to get the driving licence",&name1,&name2);
    }   
   return 0;}