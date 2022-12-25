#include<stdio.h>
#include<math.h>


struct Point
{
    int x;
    int y;
};

int manhattan(struct Point m, struct Point n)
{
    int res = abs(m.x - n.x) + abs(m.y - n.y);
    return res;
}

int main()
{
    struct Point p1 = {1, 1};
    struct Point p2;
    scanf("%d %d", &p2.x, &p2.y);

    int ans = manhattan(p1, p2);

    printf("Manhattan distance is = %d", ans);

    return 0;
}