#include <stdio.h>

int main(){
    int i = 5;                                 //5
    printf("The value of i is %d\n" , i);

    i = i + 5;                                 //10
    printf("The value of i is %d\n" , i);
    
    
    printf("The value of i is %d\n" , i++);   //10
    
    printf("The value of i is %d\n" , i++); //prints 11 but i becomes 12
                      //i++ means use the value first then increment it by 1
    
    printf("The value of i is %d\n" , ++i); //++i means increment first then use the value
    
    printf("The value of i is %d\n" , i); //prints 13
    i = i + 2;    //works same as i++ , HERE JUST ITS I+2 
    printf("The value of i is %d\n" , i);//prints 15    
    return 0;
}