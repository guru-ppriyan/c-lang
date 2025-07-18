#include <stdio.h>
#define global 1

int g=3; // global variable

int getValue(); //function protype

int staticValue(){
    static int d= 12;//static scope
    printf("%d",g+d);
}




int main(){
    int d = 20;

    printf("%d\n",g);
    getValue();
    return 0;
}

// function declaration
int getValue(){
    int d= 12;//local variable
    printf("%d",g+d);
}
