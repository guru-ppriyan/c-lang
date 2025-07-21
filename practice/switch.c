#include <stdio.h>
 
int switchDay (int);


int main(){
    int day =9;
    switchDay(day);
    return 0;    
}

int switchDay(int d){

switch (d) {
  case 'A':
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default :
   printf("No such Day");
   break;
}

}