#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    double marks;
};

void print_student(int n, struct Student s)
{
    printf("Information of Student: %d \n", n);
    printf("Roll -> %d\n", s.roll);
    printf("Name -> %s\n", s.name);
    printf("Mark -> %lf\n", s.marks);
    printf("\n");
}

int main()
{
    struct Student cls[5];

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", &cls[i].name);
        scanf("%lf", &cls[i].marks);
    }

    for (int i = 1; i <= 5; i++)
    {
        if(cls[i].roll % 2 == 0)
            print_student(i, cls[i]);
    }

    return 0;
}

/* 
12 
Farhan
34.63

32
AbuBakar
56.32

34
Obaidul
56.33 

15
Jawat
65.32

65
Rizvi
45.23 
*/