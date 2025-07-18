#include<stdio.h>
int myNum (int x, int y ){
    return x*y;
}
int division() ;

int main() {
int a=16;
int b=8;
int sum=myNum(a,b);
printf("%d\n",sum );
// function calling 
printf("%d", division(a,b)) ;



return 0;
}

int division(int a, int b) {
  return  a/b ;
    
    
}
