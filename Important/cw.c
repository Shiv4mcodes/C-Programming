#include <stdio.h>
void func(){
    printf("hello\n");
      
return;
}
void fun(){
    printf("oooooo\n");
    return;
} 
float add(int a, int b,float c){
return a-b*c;
}

int main(){
int a=50;
int b=6;
float c = 4;

func();
fun();
int result= add(a,b,c);
printf("%f",result);

    return 0;
}