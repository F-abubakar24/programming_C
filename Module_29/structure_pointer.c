#include<stdio.h>

struct Student{
    double weight;
    int roll;
    int me;
};

int main()
{
    struct Student s = {.roll = 12, .weight = 85.2, .me = 34};
    struct Student *sp;

    sp = &s;

    printf("%d %lf %d\n", sp->roll, sp->weight, sp->me);

    return 0;
}