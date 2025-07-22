#include <stdio.h>

int switchGroup(char);

int main()
{
    int bloodgroup = 'B' ;
    switchGroup(bloodgroup);
    return 0;
}
int switchGroup(char a)
{
    switch (a)
    {
    case 'A':
        printf("A+ve");
        break;

    case 'B':
        printf("A-ve");
        break;

    case 'C':
        printf("B+ve");
        break;

    case 'D':
        printf("B-ve");
        break;

    case 'E':
        printf("o+ve");
        break;

    case 'F':
        printf("o-ve");
        break;
    default:
        printf("blood group not found");
        break;
    }
}
