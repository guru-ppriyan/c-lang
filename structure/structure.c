/*What is a Structure in C?
A structure (struct) is a user-defined data type 
in C that groups different data types under one name.

Why Use Structures?
To represent real-world entities like Student, Employee, Product, etc.

To store multiple values of different types together.

 Example: Defining and Using a Structure*/

 /*struct StructName {
    dataType member1;
    dataType member2;
    ...
};
struct Student s1 = {1, "John", 90.0};


struct Student *ptr = &s1;
printf("Name: %s\n", ptr->name);*/

/*Nested Structures (Structure inside Structure)
struct Date {
    int day, month, year;
};

struct Student {
    int id;
    struct Date dob;  // nested structure
};*/

/*Feature	Description
struct	Keyword for structure
Group variables	Of different types under one name
Use cases	Student, Product, Employee data, etc
Access fields	. or -> (with pointer)*/



