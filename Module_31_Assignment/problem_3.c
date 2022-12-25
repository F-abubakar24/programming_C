#include<stdio.h>

int chang_value(int a){
    a = 22;
    return a;
}

int main()
{
    int a = 5, num = 0;
    num = chang_value(a);

    printf("Orginal variable: %d\n", a);
    printf("Copy of orginal variable: %d\n", num);

    return 0;
}


#include<stdio.h>

void chang_value(int *a){
    *a = 22;
}

int main()
{
    int a = 5, num = 0;
    chang_value(&a);

    printf("Orginal variable: %d\n", a);
    return 0;
}