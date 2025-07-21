// functions with return type without parameter 
# include<stdio.h>
int myNum () {
    return 22/7 ;
}

int main() {
    int x=12 ;
    int y=5;
    int product = x*y ;
    int answer= myNum() ;
    printf ("%d" , product) ; 
    printf("%d\n" , answer) ;
    return 0 ;

}