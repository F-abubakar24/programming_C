#include<stdio.h>

struct Point
{
    float x;
    float y;
};

struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point centroid(struct Triangle tri)
{
    struct Point ans;
    ans.x = (tri.A.x + tri.B.x + tri.C.x) / 3;
    ans.y = (tri.A.y + tri.B.y + tri.C.y) / 3;
    return ans;
}

int main()
{
    struct Point p1 = {1, 1};
    struct Point p2 = {4, 5};
    struct Point p3 = {1, 5};

    // scanf("%f %f", &p1.x, &p1.y);
    // scanf("%f %f", &p2.x, &p2.y);
    // scanf("%f %f", &p3.x, &p3.y);

    struct Triangle t = {p1, p2, p3};

    struct Point c = centroid(t);

    printf("The centroid is = %0.2f, %0.2f\n", c.x, c.y);

    return 0;
}