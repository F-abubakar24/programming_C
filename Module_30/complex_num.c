#include<stdio.h>

struct Cmplx
{
    double real;
    double emg;
};

void printcomp(struct Cmplx c)
{
    printf("%0.3lf + %0.3lfi", c.real, c.emg);
}

struct Cmplx add_cmp(struct Cmplx d, struct Cmplx e)
{
    struct Cmplx ans;
    ans.real = d.real + e.real;
    ans.emg = d.emg + e.emg;

    return ans;
}

struct Cmplx multi_cmp(struct Cmplx d, struct Cmplx e)
{
    struct Cmplx ans;
    ans.real = d.real * e.real - d.emg * e.emg;
    ans.emg = d.real * e.emg + e.real * d.emg;

    return ans;
}

int main()
{
    struct Cmplx c1 = {5.9, 3.1};
    struct Cmplx c2 = {-2.5, 3.7};

    printcomp(multi_cmp(c1, c2));

    return 0;
}