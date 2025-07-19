#include<stdio.h>

int main () {

    FILE *f ;// to access the file  values  

    char c;

    f=fopen("file.text","w" );

    if (f==NULL){
        printf("no such file is found") ;
        return 0; 
    }
    fprintf(f,"how to handle a file\n") ;
     fclose(f);
    FILE *fb ;
    fb=fopen("file.text","r");

    if (fb==NULL) {
        printf("no such file is found ");
        return 0;
    }

    while ((c=fgetc (fb))!=EOF) {
        putchar(c) ;
    }

    fclose(fb);

    return 0;
}

 