#include <stdio.h>


int main(){

    FILE *f;

    char c;

    f = fopen('file.text',"r");


    if(f == NULL){
        printf("No Such file is Found");
    }

    fclose(f); //close file

    return 0;

}