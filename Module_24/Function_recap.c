#include<stdio.h>
int take_radious()
{
    int r;
    printf("Please enter the radius of a circle: ");
    scanf("%d", &r);
    return r;
}

int calculate_area(int r)
{
    float ans = 3.14159 * r * r;
    return ans;
}

int main()
{
    int r;
    r = take_radious();
    float area = calculate_area(r);
    printf("Area of the circle is %f", area);
    return 0;
}