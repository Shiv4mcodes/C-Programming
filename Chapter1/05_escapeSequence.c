//These \n \t \" are called EscapeSequence character (char) , these can store 1 byte

#include <stdio.h>

int main() {
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; //this \n represents new line
    printf("Hey i am good \n nice"); //leave a line the print the next word
    printf("\n Hey i am good \t nice"); //leave a tab like space in b/w
    printf("\n Hey i am good \" nice"); //puts " in b/w

    return 0;
}