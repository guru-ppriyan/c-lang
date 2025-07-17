#include<stdio.h>

// Functions with Parameters but No Return Value
// function declaration
void sumValue(int x,int z){

    printf("%d\n",x+z);
}

// Functions with No Parameters but a Return Value
int getNumber(){
return 22/7;
}
// Functions with Parameters and a Return Value
int sum(int x,int y) {
    return x+y ;
}



int main() {
    int a=5;
    int b=7;

    int s=10,r=90;
    sumValue(a,b);  //function calling
    sumValue(s,r);  //function calling

    int value = getNumber();
    printf("%d",value);

    int add= sum(s,r) ;
    printf("\n%d",add);
    
    
    printf("\n%d",sum(a,b));
    
    return 0;
}

