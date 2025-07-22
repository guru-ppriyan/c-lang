# include<stdio.h>

struct student {
    int id;
    char name[20];
    int rollNo; 
    char class[20];
};

int main() {
    struct student s1 = {701,"Guru1",4,"XII"};
    struct student s2 = {704,"Guru2",4,"XII"};
    struct student s3 = {705,"Guru3",4,"XII"};
    struct student s4 = {703,"Guru4",4,"XII"};

    printf("ID: %d\n", s1.id);
    
    printf("Name: %s\n", s1.name);    
    return 0;

}