#include<stdio.h>
void callByValue(int c) ;
void callByReference(int *x) ;

int main ()    {
    int a= 5;
   // function calling

    callByValue(a) ;  //dont mention data types in arguments
    printf(" outer function:%d\n",a) ;

    callByReference (&a) ; // to refer address using pointer 
    printf("outer function :%d\n",a) ; 
    return 0;

    
}
//Call by Value
/*What It Means:
A copy of the variable is passed to the function.

Changes made inside the function do not affect the original variable.*/


//function declaration 
     void callByValue (int c) {
        c= c+8 ;
        printf("inner function: %d\n", c ) ;
     }
     
     
     //Call by reference
/*What It Means:
A copy of the variable is passed to the function.

Changes made inside the function do not affect the original variable.*/

   void callByReference(int *x) {
    *x= *x+4;
    printf("inner function :%d\n", *x) ;
   }
   /*Call by Reference
What It Means:
The address of the variable is passed.

Changes made inside the function do affect the original variable.*/