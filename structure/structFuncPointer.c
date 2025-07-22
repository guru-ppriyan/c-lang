#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// deffine struct
struct Employee {
    int id;
    char name[50];
    int year;
    float salary;
};

// struct function create using pointer

struct Employee*  createEmployeeDetails (int Id,char* name,int year,float salary){
    struct Employee* empee = (struct Employee*)malloc(sizeof(struct Employee*));
    empee ->id =Id;
    strcpy(empee ->name,name);
    empee ->salary = salary;
    empee ->year =year;
}

// define prototype
void displayEmployeeDetails (struct Employee* e);

// main function

int main(){

    struct Employee* e1 = createEmployeeDetails(1,"guru",2025,85.6);

    // function calling
    displayEmployeeDetails(e1);
    return 0;
}

// function declaration
void displayEmployeeDetails(struct Employee* e){
    printf("Id: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Marks :%.2f\n", e->salary);
    printf("Id: %d\n", e->year);
}
