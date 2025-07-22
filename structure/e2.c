#include <stdio.h>

// struct
struct collegeAdmn
{
    int id;
    float average_perc;
    char name[10];
    char course[20];
};

// define prototype
void displayCollegeStudDetails(struct collegeAdmn u);

// main function
int main()
{
    struct collegeAdmn s1 = {10, 76.2, "sutheen", "mechanical"};

    struct collegeAdmn s2 = {11, 81.9, "mohit", "aerospace"};

    displayCollegeStudDetails(s1);
    return 0;
}

// function declaration
void displayCollegeStudDetails(struct collegeAdmn u)
{
    printf("id :%d\n", u.id);
    printf("average_perc:%.2f\n", u.average_perc);
    printf("name:%s\n", u.name);
    printf("course:%s", u.course);
}
