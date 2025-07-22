#include <stdio.h>
#include <string.h>

// Define a structure named Student
struct Student
{
    int id;
    char name[50];
    float marks;
};

// display student details
void studentDetails(struct Student s);

int main()
{
    // Declare a structure variable
    struct Student s1;
    struct Student s2;
    struct Student s3;
    struct Student s4;
    struct Student s5;

    // Assign values
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.marks = 89.5;

    // // Print values
    // printf("ID: %d\n", s1.id);
    // printf("Name: %s\n", s1.name);
    // printf("Marks: %.2f\n", s1.marks);

    studentDetails(s1);

    return 0;
}

void studentDetails(struct Student s)
{
    printf("Id: %d\n", s.id);
    printf("Marks :%.2f\n", s.marks);
    printf("Name: %s", s.name);
}