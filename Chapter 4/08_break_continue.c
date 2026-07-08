#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        if (i==8){
            //break; // no matter what EXIT THE LOOP
            continue; // skip the itteration or the currrent i value.
        }
            printf("i is %d\n" , i);
        }
        
    printf("For loop is done!");
    
    return 0;
}