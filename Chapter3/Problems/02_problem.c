#include <stdio.h>

int main(){
    int marks1 , marks2 , marks3;
    printf("\nEnter your marks1: ");
    scanf("%d" , &marks1);

    printf("\nEnter your marks2: ");
    scanf("%d" , &marks2);

    printf("\nEnter your marks3: ");
    scanf("%d" , &marks3);

     
    if (marks1<33 || marks2<33 || marks3<33)
    {
        printf("\nYou have failed due to less marks in individual subjects");
    }
    else if ((marks1+marks2+marks3)/3 <40)
    {
       printf("You are failed due to less marks in overall subject(s)");
    }
    else if ((marks1+marks2+marks3)/3 >40)
    {
       printf("You have passed in all subject(s)");
    }

    return 0;
}