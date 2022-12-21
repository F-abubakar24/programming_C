#include<stdio.h>

struct Student{
    double weight;
    int roll;
};

int main()
{
    struct Student s[10];

    for (int i = 0; i < 5; i++)
    {
        s[i].roll = 11 + i;
        s[i].weight = 55.9 + i * 3;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("roll = %d\nWeight = %lf\n", s[i].roll, s[i].weight);
    }

    return 0;
}