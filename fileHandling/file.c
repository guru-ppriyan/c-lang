#include <stdio.h>


int main(){

    FILE *f;

    char c;

    f=fopen("file.text","r");


    if(f == NULL){
        printf("No Such file is Found");
        return 0;
    }
    while  (( c=fgetc (f) )!= EOF) {
        putchar (c);
    }
    fclose(f); //close file

    return 0;

}